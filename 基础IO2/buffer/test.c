#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    // printf("hello printf!\n"); // stdout
    // perror("perror!");         // stderr

    // fprintf(stdout, "stdout: hello fprintf\n"); // 1
    // fprintf(stderr, "stderr: hello fprintf\n"); // 2
    //C????
    printf("hello printf\n");
    fprintf(stdout,"hello fprintf\n");

    //system
    const char *msg = "hello write\n";
    write(1, msg, strlen(msg));

    fork();
    return 0;
}