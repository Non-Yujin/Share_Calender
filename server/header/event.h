#ifndef __EVENT_H_
#define __EVENT_H_

#include <string>
#include <netinet/in.h>
#include <sys/epoll.h>
#include <netinet/in.h>
#include "sockset.h"



class Event : public Sock_set
{
    public:
        Event() {}
        ~Event() {}
        void Create_event();
        void Set_event();
        void E_wait();

    protected:
        struct epoll_event ev, *events;
        int epoll_fd;
        const int EPOLL_SIZE = 20;
        int user_fds[1024];
        int event_cnt;
    
};

#endif