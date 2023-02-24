#include <stdio.h>
#include<Math.h>

#define PI 3.14

//  function declaration /prototype

// void printHello();

// //
// int main(){
//    printHello();       // function call

//     return 0;
// }

// //  function definition
// void printHello(){
//     printf("Hello world!");
// }
// void namaste();
// void bonjour();

// int main(){
//     printf("Enter the f for frech and i for Indian");
//     char ch;
//     scanf("%c",&ch);
//     if(ch=='i'){
//         namaste();
//     }
//     else {
//         bonjour();
//     }

//     return 0;
// }
// void namaste(){
//     printf("Namaste ");
// }

// void bonjour(){
//     printf("Bonjour");
// }

// int sum(int a, int b);

// int main()
// {
//     int a, b;
//     printf("Enter the number ");
//     scanf("%d\n%d", &a, &b);

//     int s = sum(a, b);
//     printf("%d", s);
//     return 0;
// }

// int sum(int a, int b)
// {

//     return a + b;
// }

// 3 : sum of n number .

// int sum(int n);

// int main(){
//     printf("sum is %d",sum(5));
//     return 0;
   
    
//     return 0 ;
// }

// int sum(int n){
//     if(n==1){
//         return 1;

//     }
//     int sumNum1 = sum(n-1);
//     int sum = sumNum1 +n;
//     return sum ;

// }
//  4: Factorial .

// int factorial(int n);

// int main(){
//     printf("The factorial are %d",factorial(5));
//     return 0;

// }
// int factorial(int n ){
//     if(n==0){
//         return 1;
//     }
//     int fact = factorial(n-1);
//     int factN = fact * n;
//     return factN;
// }

// float celsius_to_fahrenhite( float C);
// int main (){
//     float far = celsius_to_fahrenhite(37);
//     printf("Celsius to fahrenhite = %f",far);
//     return 0;
// }
// float celsius_to_fahrenhite(float C){
//    float fah = (C * (9.0/5.0) )+32;
//     return fah; 

// }

// int fib(int n );

// int main  (){


//     fib(6);

//     return 0;
// }

// int fib (int n){
//     if(n==0 || n==1){
//         if (n==0){
//             return 0;
//         }
//         if(n==1){
//             return 1;
//         }
//     }

//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);


//     int fibN = fibNm1 + fibNm2;

//     printf("Fib of %d is : %d",n , fibN);
//     return fibN;
// }



// 3 : Volume Cyclinder : 


// int vol_cycl (   int h);
// int net_rad (int R , int r);

// int main (){
    

//     float Volume = vol_cycl(25);

//     printf("Volume is %f",Volume);


//     return 0;

// }

// int net_rad (int R, int r){
    
//     int R1 = pow(R , 2);
//     int r1 = pow(r,2);
//     int rad = R1 - r1;

    


//     return  rad; 
// }

// int vol_cycl ( int h ){

//     int radius = net_rad(16,8);


    

//    float volume1 =  PI * radius * h ; 
//       return volume1 ; 


// }

// 4 : Time to Minute 
// int time_to_min(int hour , int  min);

// int main ( ){
//     int hour , min , minute;
//     printf("Enter the Hour");
//     scanf("%d ", &hour);
//     printf("Enter the Minute ");
//     scanf("%d",&min);
//     minute = time_to_min(hour , min);

//     printf("%d",minute);


    
//     return 0 ; 

// }

// int time_to_min(int hour , int  min){
//     int min1 = hour *60;

//     int total_min = min1 + min;

//     return total_min;
// }



// 5 : Permutation and combination




