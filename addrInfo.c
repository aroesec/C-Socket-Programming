#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
//creating sys calls

//function takes in three params and returns a pointer to a linked list of results
int getaddrinfo(const char *node,    //ip addr
                const char *service, //port number
                const struct addrinfo *hints,
                struct addrinfo **res)
{
    int status;
    struct addrinfo hints;
    struct addrinfo *servinfo;
    memset(&hints, 0, sizeof(hints));
    return 0;
};
