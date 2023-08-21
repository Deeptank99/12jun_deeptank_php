#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("1.Addition\n2.Subtraction\n3.Divison\n4.Multiplication\n5.Module");
	printf("\nEnter Your Choice");
	scanf("%d",&ch);
	printf("Enter The Value Of A And B =");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case 1:
			printf("Addition Is =",a+b);
	}
	return 0;
}
