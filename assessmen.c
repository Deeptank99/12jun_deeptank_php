#include<stdio.h>
 void sarvado(){
     int a,b;
     printf("enter the value of a:");
     scanf("%d",&a);
     printf("enter the value of b:");
     scanf("%d",&b);
     printf("addition of the a and b is:%d",a+b);
     }
     void badbaki(){
     int a,b;
     printf("enter the value of a:");
     scanf("%d",&a);
     printf("enter the value of b:");
     scanf("%d",&b);
     printf("addition of the a and b is:%d",a-b);
     }
     void bhagakar(){
     int a,b;
     printf("enter the value of a:");
     scanf("%d",&a);
     printf("enter the value of b:");
     scanf("%d",&b);
     printf("addition of the a and b is:%d",a/b);
     }
     void gunakar(){
     int a,b;
     printf("enter the value of a:");
     scanf("%d",&a);
     printf("enter the value of b:");
     scanf("%d",&b);
     printf("addition of the a and b is:%d",a*b);
     }
     int main(){
         int ch;
         printf("1.sarvado\n2.badbaki\n3.bhagakar\n4.gunakar");
         printf("\nenter your choice:");
         scanf("%d",&ch);
         switch(ch){
             case 1:
             sarvado();
             break;
             case 2:
             badbaki();
             break;
             case 3:
             bhagakar();
             break;
             case 4:
             gunakar();
             break;
             default:
             printf("enter the valid choice");
             break;
             
         }
         return 0;
     }
