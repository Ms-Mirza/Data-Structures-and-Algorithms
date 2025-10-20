#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

char stack[max];

int top = -1;

void push(char c){
    if (top < max-1){
        stack[++top] = c;
    }
    else{
        printf("Stack Overflow.\n");
    }
}

char pop(){
    if(top >= 0){
        return stack[top--];
    }
    else{
        return '\0';
    }
}

char peek() {
    if (top >= 0)
        return stack[top];
    else
        return '\0';
}

int precedence(char op){
    switch(op){
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default: return 0;
    }
}

void infixToPostfix(char infix[]){
    char postfix[max] = "";
    int i, k = 0;
    char ch, temp;

    for (i=0; i< strlen(infix); i++){
        ch = infix[i];

        if (isalnum(ch)){
            postfix[k++] = ch;
        }
        else if (ch == '('){
            push(ch);
        }
        else if(ch==')'){
            while(top != -1 && peek() != '('){
                postfix[k++] = pop();
            }
            pop();
        }
        else{
            while (top != -1 && precedence(peek())>= precedence(ch)){
                if(ch == '^' && peek() == '^') 
                    break;
                postfix[k++] = pop();
            }
            push(ch);
        }
    }
    while (top != -1){
        postfix[k++] = pop();

    }
    postfix[k] = '\0';
    printf("Postfix Expression: %s\n", postfix);
}

int main(){
    char infix[max];
    printf("Enter the infix expression: ");
    gets(infix);
    infixToPostfix(infix);
    return 0;
}