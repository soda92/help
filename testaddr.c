#include <stdio.h>

void print_bytes(void *ptr, int size)
{
    unsigned char *p = (unsigned char *)ptr;
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%02hhx ", p[i]);
    }
    printf("\n");
}

int main()
{
    int A = -65;
    printf("%p\n", (void*)&A);
    print_bytes(&A, 4);
    return 0;
}