#include<stdio.h>
int main (){
    int year, month;
    printf("Year is : ");
    scanf("%d" , &year);
    printf("Month is : ");
    scanf("%d" , &month);
    if (year%4==0 && year%100!=0 ){
        printf("leap");
    }
    else if(year%400==0 && year%100==0){
        printf("leap leap");
    }









    return 0;
}