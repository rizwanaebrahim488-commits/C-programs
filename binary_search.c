#include<stdio.h>

//function to sort array (selection sort)
void sort(int *a,int n);

// function to search a number using binary search
int search(int *a,int n,int s);


void main() {
       int i,s,n,a[100],f;
       
       //read the size of array
       printf("Enter the size of array:\n");
       scanf("%d",&n);
       
       //read array elements
       printf("Enter the array elements");
       for(i=0;i<n;i++)
            scanf("%d",&a[i]);
       
       //call sorting function     
       sort(a,n);
       
       //read number to search
      printf("Enter the number to be searched");
      scanf("%d",&s);
      
      //call binary search
      f=search(a,n,s);
      
      //if search returns non-zero element is found
      if(f!=0)
         printf("The searched number is present at %d th position",f);
      else
         printf("The number is not present");
}


void sort(int b[100],int m) {
       int i,j,temp,min;
       
       for(i=0;i<(m-1);i++) {
            min=i;//assume current index holds minimum
            
            for(j=i+1;j<m;j++) {//find actual minimum element
            
                if(b[j]<b[i])
                    min=j;//if smaller element is found update min index
            }
            
            //swap smallest element with position i
            temp=b[i];
            b[i]=b[min];
            b[min]=temp;
       }
}


int search(int c[100],int x,int key) {
     int high=x-1,low=0,i,f=0,mid;
     
     for(i=0;i<x;i++) {
         mid=(low+high)/2;
         
         if(c[mid]==key) {
            return mid;//if element found return index
         }
         
         else if(c[mid]>key)//if element smaller ,search left half
              high=mid-1;
         else//if element larger search right half
              low=mid+1;
     }
     return f;//if not found return zero
}

