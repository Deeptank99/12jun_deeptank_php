//wap to convert years into days and days into years

#include<stdio.h>
int main(){
    int a,b;
    printf("1.year into day.\n2.day into years");
    printf("\nchose your conervation;");
    scanf("%d",&a);
    printf("\nenter your digit:");
    scanf("%d",&b);
    switch(a){
        case 1:
        printf("%d days", b*365);
        break;
        case 2:
        printf("%d year",b/365);
        break;
        default:
        printf("enter valid input");
        break;
    }
    
return 0;
}