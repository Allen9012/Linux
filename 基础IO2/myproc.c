#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    umask(0);
    // fd = 1
    // int fd = open("log.txt", O_WRONLY|O_CREAT, 0666);
    int fd = open("log.txt", O_WRONLY | O_APPEND); // a
    if (fd < 0)
    {
        perror("open");
        return 1;
    }

    // fd, 1
    close(1);
    dup2(fd, 1);

    // C ,FILE*, stdout(FILE*)
    // stdout -> 1
    printf("hello printf\n"); //.bashrcstdout,内部封装了
    fprintf(stdout, "hello fprintf\n");
    fputs("hello fputs %d %d %f %c\n", stdout);
    fflush(stdout);

    //    char buffer[100];
    //    fgets(buffer, 100, stdin);
    //
    //    printf("%s\n", buffer);
    //
    // fclose(stdout);
    close(fd);

    return 0;
}