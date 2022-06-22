#include "header/recv.h"

void Recv::Recv_main(Server &serv, string msg)
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