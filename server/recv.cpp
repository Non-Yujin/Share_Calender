#include "header/recv.h"

using namespace std;

void Recv::Recv_main(string msg)
{
    clnt_msg = msg;
    if(clnt_msg.find("login") != string::npos)
    {
        login();
    }
    else if(clnt_msg.find("signup") != string::npos)
    {
        sign_up();
    }
}

void Recv::login()
{

}

void Recv::sign_up()
{
    
}