#include<stdio.h>
void main(){
	int age;
	char c,name[50];// Character variable c  to store gender (m/f) and Character array (string) to store name
	//String in C is stored as array of characters ending with '\0'
	printf("Enter your name : ");
	// we dont need to use & with name bcoz name is a character array ,array name  alreday gives the address of first element
	scanf("%s",name);
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Enter your gender (m/f) : ");
	//The space before %c is used to skip whitespace characters,else it will not wait for user to type m or f
	scanf("  %c",&c);
	if(age>=18){
		printf("---Voter deatils---\n Name : %s \n Age : %d\n",name,age	);
		if(c=='f'|| c=='F'){
			printf("Gender : Female\n");
		}
		else if (c=='m' || c=='M'){
			printf("Gender : Male \n");
		}
		else{
			printf("Gender : Not Specified\n");
		}
		printf("Status :ELIGIBLE TO VOTE\n");
	}
	else{
		printf("Status : NOT ELIGIBLE  (under 18 ) \n");
	}
}
