  #include<stdio.h>
int main (){
    float pi=3.14;
    int r,l,w,b,h,ch,area;
    printf("1.circle\n2.rectangle\n3.triangle");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("enter the radius:");
        scanf("%d",&r);
        area= pi*r*r;
        printf("radius of the circle=%d",area);
        break;
        case 2:
        printf("enter the legnth:");
        scanf("%d",&l);
        printf("enter the width:");
        scanf("%d",&w);
        area=l*w;
        printf("area of recantgle:%d",area);
        break;
        case 3:
        printf("enter the base:");
        scanf("%d",&b);
        printf("enter the hight:");
        scanf("%d",&h);
        area=b*h/2;
        printf("area of triangle:%d",area);
        break;
        default:
        printf("enter valid value............");
        break;
    }
    return 0;
}