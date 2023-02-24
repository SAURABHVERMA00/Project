#include <stdio.h>
int age(int day , int month , int year);
int main (){
    int day , month, year;
    printf("Day : \n");
    scanf("%d",&day);
    printf("Month : \n");
    scanf("%d",&month);
    printf("Year : \n");
    scanf("%d",&year);

   printf("%d", age ( day,month,year));



    return 0;
}
int age(int day , int month , int year){
    int currday,currmonth, curryear ,age1;
    printf("Current Day : \n");
    scanf("%d",&currday);
    printf("Current Month : \n");
    scanf("%d",&currmonth);
    printf("Current Year : \n");
    scanf("%d",&curryear);
    if(month>=currmonth){
        
        age1 = curryear-year;
       
    }
    else {
       age1 = curryear-year+1;
      
    }

    
    return age1;

}