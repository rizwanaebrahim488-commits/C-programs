#include<stdio.h>


//function to check if a number is prime
int generate(int);


void main() {
        int i,l,p;
        printf("Enter the limit ");//read limit from user
        scanf("%d",&l);
        
        if(l<=1){//if limit <= 1 ,no prime exist
        printf("There is no prime number ");
        }
        else {
             for(i=2;i<l;i+=1) {//loop starts from 2 bcoz prime no. start from 2
                  p=generate(i);
                  if(p!=0) {
                     printf("%d\n",i);
                  }
             }
       }
}


int generate(int n) {
     int i,r,f=1;
     
     for(i=2;i<=n/2;i+=1) {//dividing n by all no. from 2-n/2
          r=n%i;//find reminder
          if(r==0)
             f=0;//if reminder 0,it's not prime
     }
     return f;//return 1 if prime ,0 if not
}
