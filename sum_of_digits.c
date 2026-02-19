#include<stdio.h>
int digit(int);
void main(){
int n,c;
printf("Enter the number ");
scanf("%d",&n);
c=digit(n);
printf("Sum of digit : %d ",c);
}
int digit( int l){
int i,r,sum=0;
for(i=l;i>0;i=(i/10)){
r=i%10;
sum=sum+r;
}
return sum;
}
