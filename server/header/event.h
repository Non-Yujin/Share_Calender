#ifndef __EVENT_H_
#define __EVENT_H_

#include <netinet/in.h>
#include <sys/epoll.h>
#include <netinet/in.h>
#include "sock_set.h"

class Event : public Sock_set
{
    public:
        Event() {}
        ~Event() {}
        void Create();
        void Set_event();

    protected:
        struct epoll_event ev, *events;
        int epoll_fd;
        const int EPOLL_SIZE = 20;
        int user_fds[1024];
    
};

#endif