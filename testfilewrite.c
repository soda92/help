#include <stdio.h>

int main()
{
    int number_of_lines = 1;
    FILE *f = fopen("test.txt", "w");
    for (int i = 1; i <= number_of_lines; i++)
    {
        fprintf(f, "line %d\n", i);
    }
    fclose(f);
    return 0;
}