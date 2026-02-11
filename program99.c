#include<stdio.h>
int main(){
    float sub1, sub2,sub3, sub4, sub5,percentage,sum;
    printf("Enter subject 1 Marks = ",sub1);
    scanf("%f",&sub1);
    printf("\nEnter subject 2 Marks = ",sub2);
    scanf("%f",&sub2);
    printf("\nEnter subject 3 Marks = ",sub3);
    scanf("%f",&sub3);
    printf("\nEnter subject 4 Marks = ",sub4);
    scanf("%f",&sub4);
    printf("\nEnter subject 5 Marks = ",sub5);
    scanf("%f",&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    printf("\nTHE SUM OF MARKS OF ALL FIVE SUBJECTS = %f",sum);
    printf("\n");
    percentage=(sum/500)*100;
    printf("\nTHE percentage MARKS OF STUDENT = %f",percentage);
    return 0;
}