/* preprocessor directives */
#include <assert.h> /*  header file in the standard library  that defines the C preprocessor macro assert() */
#include <fcntl.h> /* header shall define the following requests and arguments for use by the functions fcntl() and open() */
#include <unistd.h> /* header file that provides access to the POSIX operating system API ,  defines STDIN_FILENO, system calls,etc */
#include <stdio.h> /* linked header file for standard input/output facilities */
#include <stdlib.h> /* linked header file for standard library i.e needed for atoi() */
#include <string.h> /* linked header file for string library i.e strlen */
#include <netdb.h> /* for struct sockaddr_in AF_IN i.e gethostbyname */
#include <sys/types.h> /* linking header file for include system data type definitions */
#include <sys/socket.h> /* header file shall define the types and structures of socklen_t i.e socket specific definitions */
#include <arpa/inet.h>  /* for inet_pton i.e IP address conversion stuff */
#include <netinet/in.h> /* for IPPROTO_TCP i.e INET constants and stuff */

#define PORT "80" // defining local port of the server
#define INTERIM_IP "185.11.146.151" // defining IP Address of the server i.e Public IPv4 Address
#define GET_INFO "GET / HTTP/1.1\r\nHost: alind.interimbit.com:80\r\n\r\n"  // defining host address with local port foir getinfo


int main()
{

freopen("aind.html","w",stdout); // open the plain text file in write mode after fetching the html data
    int sock_local; // defining socket variable
    in_port_t port = atoi(PORT); // conversion of string's port data into int type using atoi()
    struct sockaddr_in server; // A sockaddr_in is a structure containing an internet address. This structure is defined in <netinet/in.h>.
	
	/* create a socket
     IP protocol family (PF_INET)
  */

  /* intialize socket structure */
    memset(&server, 0, sizeof(server)); //  fill a block of memory with a particular value of server
    server.sin_family = AF_INET; // refers to addresses from the internet, IP addresses specifically.
    server.sin_port = htons(port); // function converts values between host and network byte orders

    //Create a call to socket() function
    sock_local = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    assert(sock_local > 0);

    int retVal = -1;
    retVal = inet_pton(AF_INET, INTERIM_IP, &server.sin_addr.s_addr);  //ip address of INTERIMBIT for fetching the data from subserver host
    assert(retVal == 1); // the argument assert must be true when the macro is executed, otherwise the program aborts and prints an error message

    if (connect(sock_local, (struct sockaddr*)&server, sizeof(server)) < 0) // connect connection
    {
        perror("connect"); // if error on failure
        exit(EXIT_FAILURE); // exit
    }

    ssize_t nByte = send(sock_local, GET_INFO, strlen(GET_INFO), 0); // fetching headers with html file data using predefined argument GET_INFO
    if( nByte <= 0)
    {
        perror("send"); // requesting headers error
        exit(EXIT_FAILURE); // exit
    }

    char BUF[BUFSIZ]; // The server reads characters from the socket connection into this buffer.
    size_t recived_len = 0;
    while ((recived_len = recv(sock_local, BUF, BUFSIZ-1, 0)) > 0) // continous loop for receiving fetched data
    {
        int statu;
        BUF[recived_len] = '\0'; // null character assgined for identifying string termination
        printf("%s", BUF); // printing html file's data
        statu = (recived_len==BUFSIZ-1) ? 0 : 1;
        
    }
    if (recived_len < 0) // if the data is not received, then it will give error
    {
        perror("recv");
    }

    close(sock_local); // free the socket
    return 0;
}
