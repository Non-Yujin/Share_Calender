#ifndef __RECV_H_
#define __RECV_H_

#include <string>
#include <cstring>
#include "udata.h"

using namespace std;

class Recv
{
    public:
        Recv(){}
        ~Recv() {}
        void Recv_main(string clnt_msg);
        void login();
        void sign_up();

    private:
        char query[SIZE_CONST::BUF_SIZE];
        string clnt_msg;

};

#endif