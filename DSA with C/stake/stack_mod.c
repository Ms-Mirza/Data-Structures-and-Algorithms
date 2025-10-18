#include <stdio.h>
#include <ctype.h>
#define maxstack 5

int top = -1;

int stack[maxstack];

int i, getpush;

char ch;

void push(int);
void pop();
void display(int list);

int main()
{
    do
    {
        printf("\n\n[-------Stack Menu-------]");
        printf("\nA - Push Stack");
        printf("\nB - Pop Stack");
        printf("\nD - Display Stack Content");
        printf("\nX - Exit Menu");
        printf("\nPlease enter choice: ");

        scanf(" %c", &ch);
        ch = toupper(ch);
        switch (ch)
        {
        case 'A':
            printf("\nPlease enter the number to push stack: ");
            scanf("%d", &getpush);
            push(getpush);
            break;

        case 'B':
            printf("\nPop the stack");
            pop();
            break;

        case 'D':
            display(top);
            break;

        case 'X':
            printf("\nExit stack menu");
            break;

        default:
            printf("\nInvalid entry. Please select A, B, D, X\n");
        }
    } while (ch != 'X');

    return 0;
}

void push(int item)
{
    if (top == maxstack - 1)
    {
        printf("The stack is overflow !!");
        return;
    }
    else
    {
        top++;
        stack[top] = item;
        display(top);
        return;
    }
}

void display(int list)
{

    printf("\nContents of stack: ");
    if (list == -1)
    {
        printf("\n The stack is now empty");
    }
    else
    {
        for (int i = 0; i <= list; i++)
        {
            printf("\n Number at location stack %d = %d", i, stack[i]);
        }
    }
}

void pop()
{
    if (top == -1)
    {
        printf("The stack is underflow!!");
        return;
    }
    else
    {
        top--;
        display(top);
        return;
    }
}
