#include<stdio.h>
int main()
{
	int A,B,C,Average;
	printf("enter the value of A:");
	scanf("%d",&A);
	printf("enter the value of B:");
	scanf("%d",&B);
	printf("enter the value of C:");
	scanf("%d",&C);
	Average=(A+B+C)/3;
	printf("Average is:%d",Average);
	return 0;
}