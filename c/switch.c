#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter operand first:");
    scanf("%d",&a);
    printf("Enter operand second:");
    scanf("%d",&b);
    printf("Enter operator:");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("Adition = %d",a+b);
        break;
        case '-':
        printf("subtraction = %d",a-b);
        break;
        case '*':
        printf("multiplication = %d",a*b);
        break;
        case '/':
        if (b<=0){
            printf("not possible");
        }
        else{
            printf("Divison = %f",(float)a/b);
        }
        break;
        default:
        {
            printf("ERROR! INVALID OPERATION");
        }
    }
    return 0;
    }