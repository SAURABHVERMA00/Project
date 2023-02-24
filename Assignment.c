#include <stdio.h>

int main(){
   
//    Question 1 : 
    // printf(" \"Welcome to \"Chitkara\",Dear Suarabh\"  ");


// Question 2 :
//  int a , b;
//  printf("Enter the Number a :");
//  scanf("%d",&a);
//  printf("Enter the Number b :");
//  scanf("%d",&b);

//  printf("Sum of %d and %d  is = %d \n",a,b,a+b);
//  printf("Difference of %d and %d  is = %d \n",a,b,a-b);
//  printf("Multiply  of %d and %d  is = %d \n",a,b,a*b);
//  printf("Division of %d and %d  is = %d \n",a,b,a/b);
//  printf("Remainder of %d and %d  is = %d \n",a,b,a%b);

// Question 3:
//  char ch;
//  printf("Enter the Character :");
//  scanf("%c",&ch);

//  printf("ASCII of Character %c is = %d",ch,ch);

// Question 4:
//  printf("%lu \n",sizeof(int));


// Question 5 :
// char a='b';
// char  ch1;
// ch1=(int)a-32;
// printf("%c",ch1);

//  Question 6;

//  int a , b;
//  printf("Enter the Number a :");
//  scanf("%d",&a);
//  printf("Enter the Number b :");
//  scanf("%d",&b);

// int salary=35000 ,year;
// int inc = salary * 10 /100 ;
// printf("Year ");
// scanf("%d",&year);
// printf("Total salary in %d year is : %d ", year*12*salary+inc);

//  6 : different biwise operands:
// int a=2 , b=3;
// int ope;
// ope=a<<b;
// printf("%d",ope);


// 7 : find out complement of given number:
// int a=0  ;
// int ope=~a;
// printf("%d",ope);

// 8 : Area of circle :
// int radius, diameter =16; 
// float area;
// radius=diameter/2;
// area=PI*radius*radius;
// printf("Area is %f",area) ;


// 9 : without using addition operator add two number :
// int a=2 ,b=3 , sum;
// sum=a-(~b)-1;
// printf("Sum : %d",sum);

// 10 :  Write a program to multiply  variabe with a constant without using the multiplication sign .
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
    

// 11 : Even or odd Number.
// int num;
// printf("Enter the Number : ");
// scanf("%d",&num);
// if(num%2==0){
//     printf("%d is a Even Number .",num);
// }
// else{
//     printf("%d is a Odd Number .",num);
// }

// 12 : using ternary operator
//  int num, s;
//  printf("Enter the Number : ");
//  scanf("%d",&num);
//  s=num%2==0 ? printf("Even number ") : printf("Odd number");
//  printf("%c",s);

// 13 : eligible for vote :
// int age ;
// printf("Enter the age : ");
// scanf("%d",age);
// if (age>=18){
//     printf(" eligible for vote .");
// }
// else {
//     printf(" Not Eligible for vote .");
// }

// 14 : Write a program to check a number is zero ,positive and negative.
// int num;
// printf("Enter the number : ");
// scanf("%d",&num);
// if(num>0){
//     printf("Positive Number .");
// }
// else if(num<0){
//     printf("Negative Number .");

// }
// else {
//     printf("Zero");
// }

// 15 :Calculate the grade according the marks :
// int marks;
// printf("Enter the Marks : ");
// scanf("%d",&marks);
// if(marks>=90 && marks<100){
//     printf("Grade A ");
// }
// else if(marks>=70 && marks<90){
//     printf("Grade B ");
// }
// else if(marks>=50 && marks<70){
//     printf("Grade C ");
// }
// else if(marks>=40 && marks<50){
//     printf("Grade D ");
// }
// else if(marks>=0 && marks<40){
//     printf("Grade E ");
// }
// else{
//     printf("Marks are not valid .");
// }

//  16 : greater number :
// int a,b,c;
// printf("Enter the number : ");
// scanf("%d %d %d",&a,&b,&c);
// if(a>b && a>c){
//     printf("%d",a);

// }
// else if(b>c){
//     printf("%d",b);

// }
// else {
//     printf("%d",c);


// }

// 17 :using ternary operator :
// int a,b,c,big ;
// printf("Enter the number : ");
// scanf("%d %d %d",&a,&b,&c);

// big = (a>b && a>c) ? (a) : ( (b>c)?(b):(c) );  
// printf("%d",big);

// 18 : odd or even and check if even the  divisible by 4 and if odd then divisible by 3: 
// int num;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     // true if num is perfectly divisible by 2
//     if(num % 2 == 0){
//         printf("%d is even.\n", num);
//         if(num%4==0){
//             printf("%d is dividble by 4 .\n",num);
//         }
//         else {
//             printf("%d is not divisible by 4 .\n");
//         }
// }
//     else {
//         printf("%d is odd.\n", num);
//         if(num%3==0){
//             printf("%d is dividble by 3.\n ",num);
//         }
//         else{
//             printf("%d is not divisible by 3.\n");
//         }
//     }

//  19 : Leap year 
    // int y ;
    // printf("Enter the year : ");
    // scanf("%d",&y);
    
//      if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0))

//       printf("It is a leap year");

//    else

//       printf("It is not a leap year");
// 21:
// int a, b;
// printf("Enter the number ");
// scanf("%d %d",&a,&b);

// a=b+a;
// b=a-b;
// a=a-b;
// printf("%d %d",a,b);

//  25: Lower to upper 
// char ch ,ch1;
// printf("Enter the character : ");
// scanf("%c",&ch);
// ch1 = (int)ch+32;
// printf("%c",ch1);

//  29: two digit number  in word
// int no ;
// printf("ENter the number : ");
// scanf("%d",&no);
// if(no<0 || no>=99){
//     printf("Invalid Number .");
// }
// else{
//     printf("Entered Number :");
//     switch(no){
//         case 0 : printf("Zero");
//         break;
//         case 10 : printf("Ten");
//         break;
//         case 11 : printf("Eleven");
//         break;
//         case 12: printf("Twelve");
//         break;
//          case 13 : printf("thirteen");
//         break;
//          case 14 : printf("Fourteen");
//         break;
//         case 15 : printf("Sixteen");
//         break;
//         case 16 : printf("Seventeen");
//         break;
//         case 18 : printf("Eighteen");
//         break;
//         case 19 : printf("Ninteen");
//         break;

//         default:
//         switch(no/10){
//             case 2 : printf("twenty");
//             break;
//             case 3 : printf("thirty");
//             break;
//             case 4 : printf("fourty");
//             break;
//             case 5 : printf("Fifty");
//             break;
//             case 6 : printf("Sixty");
//             break;
//             case 7 : printf("Seventy");
//             break;
//             case 8 : printf("Eighty");
//             break;
//             case 9 : printf("Ninty");
//             break;
            
//         }
//         switch (no%10){
//             case 1 : printf("One");
//             break;
//             case 2 : printf("Two");
//             break;
//             case 3 : printf("Three");
//             break;
//             case 4 : printf("Four");
//             break;
//             case 5 : printf("Five");
//             break;
//             case 6 : printf("Six");
//             break;
//             case 7 : printf("Seven");
//             break;
//             case 8 : printf("Eight");
//             break;
//             case 9 : printf("Nine");
//             break;
//         }
        
        
        

        
       
//     }
// }
int year , month ,Totaldays=0;
printf("Enter the year : ");
scanf("%d",&year);
printf("Enter the Month : ");
scanf("%d",month);


// if ( (year%4==0) && (year%100!=0) || (year%400==0)){
//     month;
//     switch(month){
//             case 1 : printf("Total days = %d",31);
//             break;
//             case 2 : printf("Total days = %d",60);
//             break;
//             case 3 : printf("Total days = %d",91);
//             break;
//             case 4 : printf("Total days = %d",121);
//             break;
//             case 5 : printf("Total days = %d",152);
//             break;
//             case 6 : printf("Total days = %d",182);
//             break;
           

//     }



    
// }
// else {
//     switch(month){
//             case 1 : printf("Total days = %d",31);
//             break;
//             case 2 : printf("Total days = %d",59);
//             break;
//             case 3 : printf("Total days = %d",90);
//             break;

    
// }
// }

if ((year%4==0) && (year%100!=0) || (year%400==0)){
    if(month==3){
        printf("Total days = 91");
    }

}
else {
    printf("No");
}

// printf(5+"Goodmorningn");
return 0;
}
