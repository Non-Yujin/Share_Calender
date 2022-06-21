#ifndef __SOCK_SET_H_
#define __SOCK_SET_H_

#include "addr.h"

class Sock_set : public Addr
{
    public:
        Sock_set() {}
        ~Sock_set() {}
        void Set_listen_fd();
        void Listen();
        void Bind_addr();

    protected:
        int listen_fd;        


};

#endif