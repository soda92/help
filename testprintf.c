#include <stdio.h>
struct STU
{
    char name[12];
    char sex;
    double score[2];
};
int main()
{

    struct STU x = {"Lin", 'f', 72.5, 83.0}, y;
    y = x;
    printf("%s, %c, %200f, %2.0f, \n",
           y.name, y.sex, y.score[0], y.score[1]);
    return 0;
}