#include<stdio.h>
int main(){
    float principal,rate,time,si; // 4 container create
   printf("Enter Principal :");  
   scanf("%f",&principal); 

    printf("Enter rate :");
   scanf("%f",&rate);

    printf("Enter time :");
   scanf("%f",&time);
   
    si = (principal*rate*time)/100;
    printf("Your simple interst is: %f",si);


    return 0;
}