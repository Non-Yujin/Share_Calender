#ifndef __RECV_H_
#define __RECV_H_

#include <string>
#include <cstring>
#include "header/udata.h"

class Recv
{
    public:
        Recv(){}
        ~Recv() {}
        void Recv_main(Server serv, char* clnt_msg);
        void login();
        void sign_up();

    private:
        char query[1024];
        string clnt_msg;

};

#endif