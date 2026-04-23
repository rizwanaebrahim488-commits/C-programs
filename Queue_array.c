#include<stdio.h>
#define size 20
int queue[size];
int front=-1;
int rear=-1;
void enqueue(int);
void dequeue();
void display();
int isfull();
int isempty();
int main(){
    int value,ch,c;
    while(1){
        printf("---Choose an option---\n1.insert\n2.delete\n3.display\n4.count\n5.exit\n:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                c=isfull();
                if(c==1){
                    printf("Queue overflowed!\n");
                }else{
                    printf("Enter value to insert:");
                    scanf("%d",&value);
                    enqueue(value);
                }break;
            case 2:
                c=isempty();
                if(c==1){
                    printf("Queue underflowed!\n");
                }else{
                    dequeue();
                }break;
            case 3:
                c=isempty();
                if(c==1){
                    printf("Queue underflowed!\n");
                }else{
                   display();
                }break;
            case 4:
                printf("Count=%d\n",((rear+1)-(front)));
                break;
            case 5:
                return 0;
                break;
            default:
                printf("Invalid Choice\n");
        }
    }
}

int isfull(){
    if(rear==(size-1)){
        return 1;
    }
    return 0;
}

int isempty(){
    if(front==-1||front>rear){
        return 1;
    }
    return 0;
}

void enqueue(int v){
    if(front==-1||rear==-1){
        front++;
        rear++;
        queue[front]=v;
        printf("%d is inserted to Queue\n",v);
    }else{
        rear++;
        queue[rear]=v;
        printf("%d is inserted to Queue\n",v);
    }
}

void dequeue(){
    if(front==rear){
        front=rear=-1;
        printf("one element deteted from Queue\n");
    }else{
        front++;
         printf("one element deteted from Queue\n");
    }
}

void display(){
    printf("Queue Elements:\n");
    for(int i=front;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}