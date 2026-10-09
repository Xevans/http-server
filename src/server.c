#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

void error(char *msg) {
    perror(msg);
    exit(1);
}

struct socket_address_in {
    short sin_family; // must be AF_INET
    u_short sin_port;
    struct in_addr sin_addr;
    char sin_zero[8]; // not used, must be zero
};

int main(int argc, char *argv[]) {
    int socket_file_descriptor, new_socket_file_secriptor, port_number, client, n_char;
    char buffer[256]; // server reads chars from socket connection into this buffer. 256 char limit


}