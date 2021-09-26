#include <stdio.h>
#include <stdlib.h>
#define MaxStackSize 100
typedef int DataType;
typedef struct
{
    DataType stack[MaxStackSize];
    int top;
} SeqStack;

void StackInitiate(SeqStack *S)
{
    S->top = 0;
}

int StackNotEmpty(SeqStack S)
{
    if (S.top <= 0)
        return 0;
    else
        return 1;
}

int stackpush(SeqStack *S, DataType x)
{
    if (S->top >= MaxStackSize)
    {
        printf("no place\n");
        return 0;
    }
    else
    {
        S->stack[S->top] = x;
        S->top++;
        return 1;
    }
}

int stackpop(SeqStack *S, DataType *d)
{
    if (S->top <= 0)
    {
        printf("stack is empty\n");
        return 0;
    }
    else
    {
        S->top--;
        *d = S->stack[S->top];
        return 1;
    }
}

int stacktop(SeqStack S, DataType *d)
{
    if (S.top <= 0)
    {
        printf("stack is empty\n");
        return 0;
    }
    else
    {
        *d = S.stack[S.top - 1];
        return 1;
    }
}

SeqStack *conversion(int num)
{ //十进制转化为八进制；
    SeqStack *stack = (SeqStack *)malloc(sizeof(SeqStack));
    StackInitiate(stack);
    while (num != 0)
    {
        stackpush(stack, num % 8);
        num = num / 8;
    }
    return stack;
}

int main()
{
    int number = 3896;
    SeqStack *stack = conversion(3896);
    printf("%d对应的八进制数为: ", number);

    while (StackNotEmpty(*stack))
    {
        int bit = 0;
        stackpop(stack, &bit);
        printf("%d", bit);
    }
    printf("\n");

    free(stack);
    return 0;
}
