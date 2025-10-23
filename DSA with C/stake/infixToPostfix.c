#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define max 100

char stack[max];

int top = -1;

void push(char c){
    if(top < max-1){
        stack[++top] = c;
    }
    else{
        printf("Stack is overflow\n.");
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
    int i = 0, k = 0;
    char ch;

    while (i< strlen(infix)){
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
                postfix[k++] = pop();
            }
            push(ch);
        }
        i++;
    }
    while (top != -1){
        postfix[k++] = pop();

    }
    
    printf("Postfix Expression: %s\n", postfix);
}

bool check_validation(char expration[]){

    int flag = 1;

    int length = strlen(expration);

    for(int i=0; i<=length; i++){
        if(isalnum(expration[i]) && isalnum(expration[i+1])){
            flag = 0;
            break;
        }
        if(expration[i]=='+' || expration[i]=='-' || expration[i]=='*' || expration[i]=='/'){
            if(!isalnum(expration[i-1]) || !isalnum(expration[i+1])){
                flag = 0;
                break;
            }
        }      
       
    }
    if (flag){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    char infix[max];
    printf("Enter the infix expression: ");
    gets(infix);
    bool exp = check_validation(infix);
    if (exp == true){
        infixToPostfix(infix);
    }
    else{
        printf("Invalid Expression\n");
    }
    return 0;
}