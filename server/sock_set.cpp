#include "header/sock_set.h"


void Addr::Set_listen_fd()
{
    if((listen_fd = socket(AF_INET, SOCK_STREAM, 0))==-1)
        exit(1);
}


void Addr::Bind_addr()
{
    if(bind(listen_fd, (struct sockaddr *)&addr, addrlen) == -1))
        exit(1);
}

void Addr::Listen()
{
    listen(listen_fd, 5);
}