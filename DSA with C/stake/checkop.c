#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char infix[40];
    gets(infix);

    int flag = 1;

    int length = strlen(infix);

    for(int i=0; i<=length; i++){
        if(isalnum(infix[i]) && isalnum(infix[i+1])){
            flag = 0;
            break;
        }
        if(infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/'){
            if(!isalnum(infix[i-1]) || !isalnum(infix[i+1])){
                flag = 0;
                break;
            }
        }      
       
    }
    if (flag){
        printf("The expression is valid.\n");
    }
    else{
        printf("The expression is invalid.\n");
    }
}