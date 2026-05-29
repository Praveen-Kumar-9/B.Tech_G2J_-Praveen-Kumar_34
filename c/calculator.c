#include<stdio.h>
#include<math.h>
int main(){
    float n,a,b;
    printf("|WELCOME TO CALCULATOR|\n");
    printf("Enter your choice from (1-6):");
    scanf("%f",&n);
    printf("Enter your first number:");
    scanf("%f",&a);
    printf("Enter your second number:");
    scanf("%f",&b);
    if(n==1){
        printf("Addition = %f",a+b);
    }
    else if (n==2){
        printf("Subtraction = %f",a-b);
    }
    else if (n==3){
        printf("Multiplication = %f",a*b);
    }    
    else if (n==4){
        printf("Division = %.10f",a/b);
    }
    else if (n==5){
        printf("A raise to the power b = %f",pow(a,b));
    }
    else if (n==6){
        printf("Squareroot = %f",sqrt(a));
    }    
    else{
        printf("ERROR! WRONG INPUT");
    }        
}