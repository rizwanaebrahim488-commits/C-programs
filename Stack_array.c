#include<stdio.h>
#define size 20
int stack[size];
int top=-1;
void push(int);
void pop();
void display();
int isfull();
int isempty();
int main(){
    int value,ch,c;
    while(1){
        printf("---Choose an option---\n1.push\n2.pop\n3.display\n4.peek\n5.count\n6.exit\n:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                c=isfull();
                if(c==1){
                    printf("Stack overflowed!\n");
                }else{
                    printf("Enter value to push:");
                    scanf("%d",&value);
                    push(value);
                }break;
            case 2:
                c=isempty();
                if(c==1){
                    printf("Stack underflowed!\n");
                }else{
                    pop();
                }break;
            case 3:
                c=isempty();
                if(c==1){
                    printf("Stack underflowed!\n");
                }else{
                   display();
                }break;
            case 4:
                c=isempty();
                if(c==1){
                    printf("Stack underflowed!\n");
                }else{
                    printf("Peek value:%d\n",stack[top]);
                }break;
            case 5:
                printf("Count=%d\n",top+1);
                break;
            case 6:
                return 0;
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
}

int isfull(){
    if(top==(size-1)){
        return 1;
    }
    return 0;
}

int isempty(){
    if(top==-1){
        return 1;
    }
    return 0;
}

void push(int v){
    top++;
    stack[top]=v;
    printf("%d is pushed to stack\n",v);
}

void pop(){
    top--;
    printf("Top value is poped!\n");
}

void display(){
    printf("Stack Elements:\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}