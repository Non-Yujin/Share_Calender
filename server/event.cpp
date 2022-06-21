#include "header/event.h"

void Event::Create()
{
    events = (struct epoll_event *)malloc(sizeof(struct epoll_event) * EPOLL_SIZE);
    if((epoll_fd = epoll_create(100)) == -1)
        exit(1);
}

void Event::Set_event()
{
    ev.events = EPOLLIN;
    ev.data.fd = listen.fd;
    epoll_ctl(epoll_fd, EPOLL_CTL_ADD, listen_fd, &ev);
    memset(user_fds, -1, sizeof(int) * 1024);
}