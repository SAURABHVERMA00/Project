// # include<stdio.h>
// int main (){
//     // int n;
    // scanf("%d",&n);

    // if(n%2==0){
    //     printf("Even Number  \n");
    //     if(n%4==0){
    //         printf("Divisible by 4");
    //     }
    //     else{
    //         printf(" Not divisible by 4");
    //     }
    // }
    // else{
    //     printf("Odd Number  \n");
    //     if(n%3==0){
    //         printf("Divisible by 3");
    //     }
    //     else{
    //         printf("Not divisible by 3");
    //     }
    // }

    // int n;
    // scanf("%d", &n);

    // if (n%4!=0){
    //     printf("Not Leap Year");
    // }
    // else{
    //     if(n%100!=0){
    //         printf("Leap Year");
    //     }
    //     else{
    //         if(n%400==0){
    //             printf("Leap Year");
    //         }
    //         else{
    //             printf("Not Leap Year");
    //         }
    //     }
    // }

    //  Write a progrqam to multiple variable with constant without using multiplication operator.
    // int a,b=10, shift1,shift2, prod;
    // printf("ENTER THE NUMBER a : ");
    // scanf("%d", &a);
    // printf("Enter the Shift1 :");
    // scanf("%d", &shift1);
    // printf("Enter the Shift2 :");
    // scanf("%d", &shift2);
    // printf("Product of Number : ");
    // prod= (a<<shift1)+(a<<shift2);
    // printf("%d",prod);
    
    //  Write a program to calculate to no of notes
//     int rupees,count=0;
//     printf("Enter the Rupees : ");
//     scanf("%d",&rupees);
//     if(rupees>=500){
//          int c=rupees/500;
//          count=count+c;
//          rupees=rupees%500;
//          printf("500 Note is : ");
//          printf("%d \n",count);
//          printf("%d \n", rupees);
//          int count1=0;
//          if(rupees<500 && rupees>=200){
            
//                 c=rupees/200;
//                 count1 =count1+c;
//                 rupees=rupees%200;
//                 printf("200 Note is :");
//                 printf("%d \n",count1);
//                 printf("%d \n",rupees);
//          }
//          int count2=0;
//          if ( rupees<200 && rupees>=100){
//                c=rupees/100;
//                count2=count2+c;
//                rupees=rupees%100;
//                printf("100 Note is :");
//                printf("%d \n", count2);
//                printf("%d \n", rupees);
//          }
//          int count3=0;
//          if( rupees<100 && rupees>=50){
//                c=rupees/50;
//                count3=count3+c;
//                rupees=rupees%50;
//                printf("50 Note is :");
//                printf("%d \n", count3);
//                printf("%d \n",rupees);

//                }
//          int count4=0;
//          if(rupees<50 && rupees>=20){
//             c=rupees/20;
//             count4=count4+c;
//             rupees=rupees%20;
//             printf("20 Note is :");
//             printf("%d \n", count4);
//             printf("%d \n", rupees);
//          }
//          int count5=0;
//          if(rupees<20 && rupees>=10){
//             c=rupees/10;
//             count5=count5+c;
//             rupees=rupees%10;
//             printf("10 Note is :");
//             printf("%d \n", count5);
//             printf("%d \n", rupees);

//          }


//    } else{
//       int count1=0;
//       if(rupees<500 && rupees>=200){
            
//                 int c=rupees/200;
//                 count1 =count1+c;
//                 rupees=rupees%200;
//                 printf("200 Note is :");
//                 printf("%d \n",count1);
//                 printf("%d \n",rupees);
//          }
//          int count2=0;
//          if ( rupees<200 && rupees>=100){
//                int c=rupees/100;
//                count2=count2+c;
//                rupees=rupees%100;
//                printf("100 Note is :");
//                printf("%d \n", count2);
//                printf("%d \n", rupees);
//          }
//          int count3=0;
//          if( rupees<100 && rupees>=50){
//                int c=rupees/50;
//                count3=count3+c;
//                rupees=rupees%50;
//                printf("50 Note is :");
//                printf("%d \n", count3);
//                printf("%d \n",rupees);

//                }
//          int count4=0;
//          if(rupees<50 && rupees>=20){
//             int c=rupees/20;
//             count4=count4+c;
//             rupees=rupees%20;
//             printf("20 Note is :");
//             printf("%d \n", count4);
//             printf("%d \n", rupees);
//          }
//          int count5=0;
//          if(rupees<20 && rupees>=10){
//             int c=rupees/10;
//             count5=count5+c;
//             rupees=rupees%10;
//             printf("10 Note is :");
//             printf("%d \n", count5);
//             printf("%d \n", rupees);

//          }

      
//    }
  


//    swap number
// int a,b;
// printf("Enter the number a : ");
// scanf("%d", &a );
// printf("Enter the number b : ");
// scanf("%d", &b );
// int swap;
// swap=a;
// a=b;
// b=swap;
// printf("Enter the number a : %d \n", a);
// printf("Enter the number b : %d \n", b);

//  without using swap;
#include<stdio.h>

int main(){
    // char ch;

    // printf("wnter any character");
    // scanf("%c", &ch);

    // switch (ch)
    // {
    // case 'A':
    // case 'a':
    // case 'e':
    // case 'E':
    // case 'i':
    // case 'I':
    // case 'o':
    // case 'O':
    // case 'u':
    // case 'U':
    // printf("this charater is vowel");
    // break;
    
    // default:
    // printf("this charater is not a vowel");
    // }

int n;
printf("Enter the Number ");
scanf("%d", &n);

switch (n>0)
{
case 1 : printf("Positive Number");
    break;
case 0 : 
    switch (n<0)
    {
    case 1: printf("Negative Number");
        break;
    
    case 0: printf("Zero Number");
        break;
    }



}


   return 0;
}