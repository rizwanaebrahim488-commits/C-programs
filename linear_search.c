#include<stdio.h>


int search(int *a,int n,int s);


void main() {

        int i,s,n,a[100],f;

        printf("Enter the size of array\t");
        scanf("%d",&n);//read array size
        
        printf("Enter the array elements:\n");
        for(i=0;i<n;i++)
              scanf("%d",&a[i]);//read array elements
        
        printf("Enter the number to be searched: ");
        scanf("%d",&s);//read the number to be searched
        
        f=search(a,n,s);//calling user-defined function to check the serached number is present or not 
        
        if(f==1) {//return 1 if searched number is present
            printf("The searched number:%d is present\n",s);
        }
       else {
             printf("The searched number is not present\n");
       }
       
}

int search(int b[100],int m,int r){

       int i,f=0;
       
       i=0;//check searched number is present in array using while loop
       while(i<m) {
             if(r==b[i])
             f=1;
             i++;
    }
    
    return f;
}
