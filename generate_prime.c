#include<stdio.h>


int generate(int);


void main() {
        int i,l,p;
        printf("Enter the limit ");
        scanf("%d",&l);
        
        if(l<=1){
        printf("There is no prime number ");
        }
        else {
             for(i=2;i<l;i+=1) {
                  p=generate(i);
                  if(p!=0) {
                     printf("%d\n",i);
                  }
             }
       }
}


int generate(int n) {
     int i,r,f=1;
     
     for(i=2;i<=n/2;i+=1){
          r=n%i;
          if(r==0)
             f=0;
     }
     return f;
}
