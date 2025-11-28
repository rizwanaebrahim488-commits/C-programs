#include<stdio.h>

//defining structure 
struct student {
int roll;
char name[50];
int age;
int year;
};


void main() {
      int n,i;
   
      printf("Enter the no.of students you want to enter the details:     ");
      scanf("%d",&n);
      
      int a[n];
      
      struct student s[n];//declaring array of structure
      
      for(i=1;i<=n;i++) {
           //read elements from user to store array using loop
           printf("   Enter the details of %dth student:\n",i);
           
           printf("\tEnter roll number:    ");
           scanf("%d",&s[i].roll);
           
           printf("\tEnter name:    ");
           scanf("%s",s[i].name);
           
            printf("\tEnter age:    ");
           scanf("%d",&s[i].age);
           
            printf("\tEnter year of study:      ");
           scanf("%d",&s[i].year);
           }
           
           printf("Displaying student details\n");
           
           //display the contents of array using loop
          for(i=1;i<=n;i++){
          printf("SI.NO:%d\n",i);
               printf("\tRoll no:   %d \n \tName:     %s\n\tAge:       %d\n\tYear:    %d\n",s[i].roll,s[i].name,s[i].age,s[i].year);
         }
}
