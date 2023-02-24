#include<stdio.h>
int main(){
    int ID,unit;
    int charges;
    printf("Custormer No : ");
    scanf("%d" ,&ID );
    printf("Units consumer : ");
    scanf("%d", &unit);

    // if(unit<=200){
    //     charges = unit*(0.50);
    //     printf("Charges is : %d", charges);


    // }
    // else if(201<=unit<=400){
    //     charges=100+((unit-200)*0.65);
    //     printf("Charges is : %d" , charges);
    // }
    // else if(401<=unit<=600){
    //     charges=230+((unit-400)*0.80);
    //     printf("Charges is : %d" , charges);
    // }
    // else if(unit>=601){
    //     charges=390+(unit-600*1);
    //     printf("Charges is : %d" , charges);
    // }

    switch (unit)
    {
    case 0 ... 200:
        charges= unit*0.50;
        printf("Charges is : %d",charges);
        break;
    case 201 ... 400:
        charges= 100+((unit-200)*0.65);
        printf("Charges is : %d",charges);
        break;
    case 401 ... 600:
        charges= 230+((unit-400)*0.80);
        printf("Charges is : %d",charges);
        break;
    case 601 ... 10000000 :
        charges= 390+((unit-600)*1);
        printf("Charges is : %d",charges);
        break;
    
    
    default:
        printf("Invalid");
        break;
    }
}