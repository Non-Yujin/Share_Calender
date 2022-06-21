#ifndef __SERVER_H_
#define __SERVER_H_

#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <string.h>
#include "event.h"


class Server : public Event
{
    public:
        Server(int port_num) {}
        ~Server() {}
        void Main();
        void Accept();

    private:
        struct sockaddr_in clientaddr;
        socklen_t clnt_len;
        int port, client_fd;
        int event_cnt;

};

#endif