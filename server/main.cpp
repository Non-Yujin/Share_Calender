#include <iostream>
#include "header/server.h"
using namespace std;

int main(int argc, char * argv[])
{

    if (argc != 2)
    {
        cout<<" Usage: "<<argv[0]<<" <port>\n";
        exit(1);
    }
    Server serv(9010);

    serv.Main_Func();
    

    return 0;
}