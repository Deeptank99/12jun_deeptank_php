//Write a program to make Simple calculator(to make addition,subtration,multiplication,division and modulo)

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nAddition of a and b :%d",a+b);
    printf("\nSubtration of a and b :%d",a-b);
    printf("\nMultiplication of a and b :%d",a*b);
    printf("\nDivision of a and b :%d",a/b);
    printf("\nmodulo of a and b :%d",a%b);
    return 0;
}