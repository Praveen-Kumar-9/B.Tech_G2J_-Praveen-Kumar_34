#include<stdio.h>
int main(){
    float a,b,c;
    printf("enter number 1:");
    scanf("%f",&a);
    printf("enter number 2:");
    scanf("%f",&b);
    c=a+b;
    printf("Addition =%f",c);
    c=a-b;
    printf("\nsubtraction =%f",c);
     c=a*b;
    printf("\nmultiplication =%f",c);
     c=a/b;
    printf("\ndivision =%f",c);
    return 0;
}