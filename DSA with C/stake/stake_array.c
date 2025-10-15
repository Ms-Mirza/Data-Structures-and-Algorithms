#include<stdio.h>
# define max 5

int stake[max];
int top = -1;

void push(int item){
    if(top == max - 1){
        printf("Stake is overflow");
    }
    else{
        top++;
        stake[top] = item;
        printf("%d push in the stake\n", item);
    }
}
void pop(){
    if(top == -1){
        printf("Stake is underflow.");
    }
    else{
        printf("%d popped from stake.\n", stake[top]);
        top--;
    }
}
void peek(){
    if(top == -1){
        printf("The stake is empty.\n");
    }
    else{
        int item = stake[top];
        printf("The top element is %d\n", item);
    }
}
void display(){
     if(top == -1){
        printf("The stake is empty.\n");
    }
    else{
        for(int i=top; i>=0; i--){
            printf("%d\n", stake[i]);
        }
    }
}
int main(){
    push(10);
    push(20);
    push(30);
    display();
    pop();
    peek();
    display();
    return 0;
}