#include <stdio.h>
int main(){
    //  greater number of two number is : 
    
    // int a ,b;
    // printf("Enter the number a : ");
    // scanf("%d",&a);
    // printf("Enter the number b : ");
    // scanf("%d",&b);

    // if (a>b){
    //     printf("Geater number is : %d",a);
    // }
    // else{
    //     printf("%d",b);
    // }


    // 2 : Odd or Even : 

    // int num;
    // printf("Enter the number : ");
    // scanf("%d",&num);
    // if (num%2==0){
    //     printf("Even Number ");
    // }
    // else {
    //     printf("odd Number ");
    // }

    // 3 : Income Tax Calculator : 
    // int salary , tax ;
    // printf("Enter the Salary : ");
    // scanf("%d",&salary);
    // if (salary<500000){
    //     tax=0;
    //     printf("No tax is Applied ");
    // }
    // else if (500000<salary<1000000){
    //     tax=(int)(salary*20/100);
    //     printf("Tax is : %d",tax);

    // }
    // else {
    //     tax=(int)(salary*30/100);
    //     printf("Tax is : %d",tax);
    // }

    //  4 : Print 3 largest number :
    // int A ,B ,C;
    // printf("Enter the number A : ");
    // scanf("%d",&A);
    // printf("Enter the number B : ");
    // scanf("%d",&B);
    // printf("Enter the number C : ");
    // scanf("%d",&C);

    // if (A>=B && A>=C){
    //     printf("%d is largest number .",A);
    // }
    // else if (B>=C){
    //     printf("%d is largest number .",B);
    // }
    // else {
    //     printf("%d is largest number .",C);
    // }

    // 5 : Leap Year 

    // int year ;
    // printf("Enter the year : ");
    // scanf("%d",&year);
    // if ( year%4==0){
    //     if(year%100==0){
    //         if(year%400){
    //             printf("Leap Year .");
    //         }
    //         else {
    //             printf("Not a Leap .");
    //         }
            
    //     }
    //     else {
    //         printf("Leap Year .");
    //     }
    
        
    // }
    // else {
    //     printf("Not a Leap Year .");
    // }

    // 6 : print 1 to 100
    // int num , counter=1;
    // while (counter<=100){
    //     printf("%d \n",counter);
    //     counter++;
    // }

    // // 7 : print N natural number .
    // int num ,i=1,sum=0 ;
    // printf("Enter the number : ");
    // scanf("%d",&num);
    // while (i<=num){
    //     sum=sum+i;
    //     i++;
    // }
    // printf("Sum of natural number is : %d",sum );

    // 8 : print pattern
    // int n=4;
    // for (int i=1; i<=4 ; i++){
    //     printf("**** \n");
    // }

    // 9 : print reverse number :
    // int num, last;
    // printf("Enter the Number : ");
    // scanf("%d",&num);
    // while(num>0){
    //     last = num%10;
    //     printf("%d",last);
    //     num=num/10;
    // }

    // 10 : display all number except multiple of 10;
     
    
    // int n;
    // printf("Enter the number : ");
    // scanf("%d",n);
    
    // 11: prime number:
    // int num , isPrime=0;
    // printf("Enter the Number : ");
    // scanf("%d",&num);
    // if(num==1 && num==2){
    //     printf("%d is a Prime Number ",num);

    // }
    // else {
    //     int isPrime = 0;
    //     for(int i=2 ; i<num-1 ; i++){
    //         if(num%i==0){
    //             isPrime=1;

    //         }
    //     }
    //     if (isPrime==0){
    //         printf("%d is prime number . ",num);
    //     }
    //     else {
    //         printf("%d is not a prime number . \n",num);
    //     }
    // }
    
    // 12 : range from 1 to 100 print prime number ;

// int num1 ,num2 ,flag, count=0;
// printf( "Enter the num1 and num2  : ");
// scanf("%d%d",&num1,&num2);
// if(num2<2){
//     printf("No prime number is below %d\n",num2);

// }
// printf("Primes Numbers are :\n");
// if(num1%2==0){
//     num1++;
// }
// for(int i= num1 ; i<=num2 ;i=i+2){
//     flag = 0;
//     for(int j=2 ; j<=i/2 ; j++){
//         if(i%j==0){
//             flag=1;
//             break;
//         }


//     }
//     if(flag==0){
//         printf("%d\n",i );
//         count++;
//     }


// }
// printf("Prime number between %d and %d is : %d",num1, num2 ,count);
    
// 12 : second method : 
// int num1 , num2 ,flag ;
// printf("Enter the number num1 and num2 :");
// scanf("%d%d",&num1,&num2);
// for(int i=num1 ; i<=num2; i++){
//     flag=0;
//     for(int j=2 ; j<i-1; j++){
//         if(i%j==0){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         printf("%d\n",i);
//     }
    
// }



 

        return 0;
}