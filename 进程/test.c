#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <unistd.h>

int g_unval;
int g_val = 100;

int main()
{
    printf("code addr: %p\n", main);
    char *str = "hello world";
    printf("read only addr: %p\n", str);
    printf("init addr: %p\n", &g_val);
    printf("uninit addr: %p\n", &g_unval);

    int *p = malloc(10);
    printf("heap addr: %p\n", p);

    printf("stack add: %p\n", &str);
    printf("stack add: %p\n", &p);

    for (int i = 0; i < argc; i++)
    {
        printf("args addr: %p\n", argv[i]); // ls -a -l
    }
    int i = 0;
    while (envp[i])
    {
        printf("env addr: %p\n", envp[i]);
        i++;
    }
    return 0;
}
