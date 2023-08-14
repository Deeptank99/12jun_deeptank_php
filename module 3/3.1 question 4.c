 //WAP to find simple interest
  #include<stdio.h>
 int main(){
     int a,b,c;
     printf("Enter the value of Principal amount:");
     scanf("%d",&a);
     printf("Enter the value of Rate:");
     scanf("%d",&b);
     printf("Enter the value of Time in years:");
     scanf("%d",&c);
     printf("Your simple interst:%d",a*b*c/100);
     return 0;
 }