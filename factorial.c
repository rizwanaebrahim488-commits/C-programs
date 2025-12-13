#include<stdio.h>
 
int factorial(int);//fn declaration

void main() {
      int n,f;
      
      printf("Enter a number:  ");
      scanf("%d",&n);
      
      if(n<=0) {
      printf("Enter a valid number\n");
      }
      else{
      f=factorial(n);//fn calling
      printf("Factorial of %d is : %d\n",n,f);
      }
}

int factorial(int num){
     if(num<=1) {
     return 1;//if number is less than 1 return 1
     }
     else{//recursive call
     return num*factorial(num-1);
     }
}
