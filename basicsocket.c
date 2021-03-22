#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main()
{
    char ipv4[INET_ADDRSTRLEN]; //creates pointer to hold result string
    struct sockaddr_in sa;

    inet_ntop(AF_INET, &(sa.sin_addr), ipv4, INET6_ADDRSTRLEN);
    printf("The IPv4 address is: %s\n", ipv4);
    return 0;
    
};


