#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define size 20

char stack[size];
int top=-1;

void push(char);
char pop();
int precedence(char);
void itop(char*,char*);

void main(){
    char infix[size],postfix[size];
    printf("Enter a infix expression: ");
    fgets(infix,size,stdin);
    printf("Infix expression:%s\n",infix);
    itop(infix,postfix);
    printf("Postfix Expression:%s",postfix);
}

void push(char v){
    if(top==(size-1)){
        printf("Stack is full");
    }else{
        top++;
        stack[top]=v;
    }
}

char pop(){
    if(top==-1){
        return '\0';
    }else{
        top--;
        return stack[top+1];
    }
}

int precedence(char n){
    switch(n){
        case '^':return 3;
        case '*':
        case '/':return 2;
        case '+':
        case '-':return 1;
        default:return 0;
    }
}

void itop(char infix[],char postfix[]){
    int i=0,j=0;
    char s;
    strcat(infix,")");
    while(infix[i]!='\0'){
        s=infix[i];
        if(s ==' '){
            i++;
            continue;
        }
        else if(s=='('){
            push(s);
        }
        else if(isalnum(s)){
            postfix[j++]=s;
        }
        else if(s==')'){
            while(top!=-1&&stack[top]!='('){
                postfix[j++]=pop();
                pop();
            }
        }
        else{
            while(top!=-1&&precedence(stack[top])>=precedence(s)){
                postfix[j++]=pop();
            }
            push(s);
        }
        i++;
        postfix[j]='\0';
    }
}