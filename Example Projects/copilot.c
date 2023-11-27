#include <stdio.h>  // Include the standard input/output library
#include <stdlib.h>  // Include the standard library
#include <sys/socket.h>  // Include the socket library
#include <netinet/in.h>  // Include the internet address library
#include <arpa/inet.h>  // Include the internet operations library
#include <string.h>  // Include the string library

int main() {
    // Create a socket
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);  // Create a socket using IPv4 and TCP protocol
    if (sockfd < 0) {  // Check if socket creation failed
        perror("Socket creation failed");  // Print an error message
        exit(EXIT_FAILURE);  // Exit the program with failure status
    }

    // Set up the server address
    struct sockaddr_in server_addr;  // Create a structure to hold the server address
    server_addr.sin_family = AF_INET;  // Set the address family to IPv4
    server_addr.sin_port = htons(8080);  // Set the port number to 8080
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");  // Set the IP address to localhost

    // Connect to the server
    if (connect(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {  // Connect to the server
        perror("Connection failed");  // Print an error message
        exit(EXIT_FAILURE);  // Exit the program with failure status
    }

    // Connection successful
    printf("Connected to the server\n");  // Print a message indicating successful connection

    // Send data
    char message[] = "Hello, server!";  // Message to send
    int message_len = strlen(message);  // Length of the message

    if (send(sockfd, message, message_len, 0) < 0) {  // Send the message
        perror("Send failed");  // Print an error message
        exit(EXIT_FAILURE);  // Exit the program with failure status
    }

    // Receive data
    char buffer[1024];  // Buffer to store received data
    int bytes_received = recv(sockfd, buffer, sizeof(buffer), 0);  // Receive data from the server
    if (bytes_received < 0) {  // Check if receive failed
        perror("Receive failed");  // Print an error message
        exit(EXIT_FAILURE);  // Exit the program with failure status
    }

    // Null-terminate the received data
    buffer[bytes_received] = '\0';

    // Print the received message
    printf("Received message from server: %s\n", buffer);

    // Close the socket
    close(sockfd);  // Close the socket

    return 0;  // Exit the program with success status
}

