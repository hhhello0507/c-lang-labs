#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 80

int main() {
    struct sockaddr_in server_address;
    char server_message[1024];

    // 클라이언트 소켓 생성
    const int client_socket = socket(AF_INET, SOCK_STREAM, 0);
    printf("created socket - %d\n", client_socket);
    printf("SEX");


    if (client_socket < 0) {
        perror("소켓 생성 실패");
        exit(EXIT_FAILURE);
    }

    // 서버 주소 설정
    server_address.sin_family = AF_INET; // TCP
    server_address.sin_port = htons(SERVER_PORT); // PORT

    // IP -> Binary 형태로 변환
    if (inet_pton(AF_INET, SERVER_IP, &server_address.sin_addr) <= 0) {
        perror("잘못된 서버 주소");
        exit(EXIT_FAILURE);
    }

    // 서버에 연결
    if (connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
        perror("서버 연결 실패");
        exit(EXIT_FAILURE);
    }

    send(client_socket, "GET / HTTP/1.1\r\nHost: 127.0.0.1:80\r\n\r\n", strlen("GET / HTTP/1.1\r\nHost: 127.0.0.1:80\r\n\r\n"), 0);
    recv(client_socket , server_message, 1024, 0);

    printf("%s \n", server_message);

    // closesocket(sock);
    // WSACleanup();

    /*

    // 서버로 데이터 전송
    strcpy(server_message, "Hello, server!");
    if (send(client_socket, server_message, strlen(server_message), 0) < 0) {
        perror("데이터 전송 실패");
        exit(EXIT_FAILURE);
    }*/

    // 서버로부터 데이터 수신
    /*memset(server_message, 0, sizeof(server_message));
    if (recv(client_socket, server_message, sizeof(server_message), 0) < 0) {
        perror("데이터 수신 실패");
        exit(EXIT_FAILURE);
    }*/

    // printf("Received: %s\n", server_message);

    // 소켓 연결 종료
    // close(client_socket);

    return 0;
}
