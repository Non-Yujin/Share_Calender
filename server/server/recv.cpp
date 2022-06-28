#include "header/recv.h"
#include "header/database.h"
#include "header/udata.h"



using namespace std;



void Recv::Recv_main(udata* userdata, string msg)
{
    clnt_msg = msg;
    user_data = userdata;
    if(clnt_msg.find("login") != string::npos)
    {
        login();
    }
    else if(clnt_msg.find("idcheck") != string::npos)
    {
        id_check();
    }
    else if(clnt_msg.find("signup") != string::npos)
    {
        sign_up();
    }    
    else if(clnt_msg.find("date") != string::npos)
    {
        date();
    }
}

void Recv::login()
{
    cout<<clnt_msg<<endl;
    vector<string> check_msg = Recv::split(clnt_msg, '/');
    sprintf(query, "SELECT userPw, userName FROM user where userId='%s'", check_msg[1].c_str());
    if(mysql_query(&conn, query)!=0)
    {
        write(user_data->fd, "NO", sizeof("NO"));
        puts("login_error");
    }
    else
    {
        sql_result = mysql_store_result(&conn);
        sql_row = mysql_fetch_row(sql_result);
        cout<<"password: "<<sql_row[0]<<endl;
        if(strcmp(check_msg[2].c_str(), sql_row[0])==0)
        {
            write(user_data->fd, "OK", sizeof("OK"));
            puts("login_sucess"); 
            cout<<sql_row[0]<<" "<<sql_row[1]<<endl;      
            strcpy(user_data->name, sql_row[1]);
            cout<<user_data->name<<endl;
        }
        else
        {
            write(user_data->fd, "NO", sizeof("NO"));
            puts("login_error");
        }        
    }
}

void Recv::id_check()
{
    cout<<clnt_msg<<endl;
    vector<string> check_msg = Recv::split(clnt_msg, '/');
    for (int i = 0; i < check_msg.size(); i++)
    {
        cout << check_msg[i] << endl;
    }
    sprintf(query, "SELECT * FROM user WHERE userId = %s", check_msg[1].c_str());
    if(mysql_query(&conn,query)!=0)
    {
        write(user_data->fd,"OK",sizeof("OK"));
        cout<<"OK"<<endl;
    }
    else
    {}
}

void Recv::sign_up()
{
    cout<<clnt_msg<<endl;
    vector<string> sign_msg = Recv::split(clnt_msg, '/');    
   
    sprintf(query, "INSERT INTO user VALUES('%s','%s','%s')", sign_msg[1].c_str(), sign_msg[2].c_str(), sign_msg[3].c_str());
    if(mysql_query(&conn,query)!=0)
    {
        puts("Insert error!");
        fprintf(stderr, "Failed to connect to databases: Error: %s\n",
            mysql_error(&conn));
    }
    else{
        puts("Sign up Success!!");
    }
}

void Recv::date()
{
    cout<<clnt_msg<<endl;
    vector<string> date_msg = Recv::split(clnt_msg, '/');    
}

vector<string> Recv::split(string str, char Delimiter) {
    istringstream iss(str);             // istringstream에 str을 담는다.
    string buffer;                      // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼
 
    vector<string> result;
 
    // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
    while (getline(iss, buffer, Delimiter)) {
        result.push_back(buffer);               // 절삭된 문자열을 vector에 저장
    }
 
    return result;
}