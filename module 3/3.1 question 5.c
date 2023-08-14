//wap to check if thr given year is a year or not
#include<stdio.h>
int main(){
    int a;
    printf("enter the year:");
    scanf("%d",&a);
    if(a%4==0){
        printf("leapyear");
    }

    else if(a%400==0){-
        printf("leapyear");
    
    }
    else {
        printf("normal year");
    }
    return 0;
}