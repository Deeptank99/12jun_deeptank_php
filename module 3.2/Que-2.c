#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the value of i:");
	scanf("%d",&i);
	printf("enter the value of j :");
	scanf("%d",&j);
	i=i-j;
	j=i+j;
	i=i*j;
	printf("\nvalue of i is :%d",i);
	printf("\nvalue of j is :%d",j); 
	return 0;
}
