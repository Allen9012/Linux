#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    close(1);
    umask(0);
    int fd = open("log.txt", O_WRONLY | O_CREAT, 0666); // 1
    if (fd < 0)
    {
        // file open fail
        return 1;
    }

    fputs("hello world", stdout);
    fputs("hello world", stdout);
    fputs("hello world", stdout);
    fputs("hello world", stdout);
    // printf("hello world: %d\n", 123);
    // printf("hello world: %c\n", 'c');
    // printf("hello world: %f\n", 3.14);

    fflush(stdout); // FILE *

    // write(1, "hello\n", 6);
    // write(1, "hello\n", 6);
    // write(1, "hello\n", 6);
    // write(1, "hello\n", 6);
    // write(1, "hello\n", 6);

    close(fd);

    // const char *msg = "hello world!";

    // char buffer[32];
    // read(0, buffer, 32);

    // printf("%s\n", buffer);
    // write(1, msg, strlen(msg));

    // int fd1 = open("log.txt", O_RDONLY);
    // if(fd1 < 0){
    //     printf("open error!\n");
    //     return 1;
    // }
    // printf("fd: %d\n", fd1);

    // char c;
    // while(1){
    //     ssize_t s = read(fd1, &c, 1);
    //     if(s <= 0){
    //         break;
    //     }
    //     write(1, &c, 1); //fwrite(,,,,stdout);
    // }
    int countt = 5;
    const char *msg = "hello there\n";
    while (count)
    {
        write(fd1, msg, strlen(msg));
        count--;
    }
    // close(fd1);
    // close(0);
    // close(2);

    // int fd2 = open("log.txt", O_WRONLY|O_CREAT, 0666);
    // printf("fd2: %d\n", fd2);
    // int fd3 = open("log.txt", O_WRONLY|O_CREAT, 0666);
    // printf("fd: %d\n", fd3);
    // int fd4 = open("log.txt", O_WRONLY|O_CREAT, 0666);
    // printf("fd: %d\n", fd4);
    // int fd5 = open("log.txt", O_WRONLY|O_CREAT, 0666);
    // printf("fd: %d\n", fd5);
}