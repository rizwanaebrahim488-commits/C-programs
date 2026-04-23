#include<stdio.h>
#include<ctype.h>

#define size 20
int stack[size];
int top=-1;

void push(int);
int pop();

int main(){
    char postfix[size];
    int i,op1,op2;
    printf("Enter postfix expression:");
    scanf("%s",postfix);
    for(i=0;postfix[i]!='\0';i++){
        if(isdigit(postfix[i])){
            push(postfix[i]-'0');
        }else{
            op2=pop();
            op1=pop();
            switch(postfix[i]){
                case '+':
                    push(op1+op2);
                    break;
                case '-':
                    push(op1-op2);
                    break;
                case '*':
                    push(op1*op2);
                    break;
                 case '/':
                    push(op1/op2);
                    break;
            }
        }
    }
    printf("Result=%d",pop());
    return 0;
}

void push(int x){
    stack[++top]=x;
}

int pop(){
    return stack[top--];
}