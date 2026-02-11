#include<stdio.h>
#include<math.h>
int main(){
    float p, r,a,CI,t,SI;
    printf("Enter principal amount =",p);
    scanf("%f",&p);
    printf("\nEnter rate of interest =",r);
    scanf("%f",&r);
    printf("\nEnter time =",t);
    scanf("%f",&t);
    SI=(p*r*t)/100;
    a=p*pow((1+r/100),t);
    CI=a-p;
    printf("\nThe Simple Interest =%f",SI);
    printf("\n");
    printf("\nThe Compound Interest =%f",CI); 

    return 0;
}