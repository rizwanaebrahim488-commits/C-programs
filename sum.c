#include<stdio.h>// including header file

int sum(int,int);//function declaration

void main(){// void means returns nothing
        int a,b,s;//declaring variables 
        printf("Enter two numbers");//to print messages
        scanf("%d%d",&a,&b);//to red input from user
        s=sum(a,b);//calling function with actual parameters
        printf("Sum of %d and %d =%d",a,b,s);
}


//function definition 
int sum(int m,int n){// m and n are formal parameters
      int z;
      z=m+n;
      return z;//returns an integer
}
