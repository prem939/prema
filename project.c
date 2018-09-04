#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	char name;
	int age;
};

int main()
{
	struct node prem = {20,"krishna",21};
	
	printf("Num : %d\nName : %s\nAge : %d\n",prem.data,prem.name,prem.age);
} 
