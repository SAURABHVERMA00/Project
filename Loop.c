

 #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n,count = 0 ,digit, rev, sum =0;

//     printf("enter any number : ");
//     scanf("%d", &n);

//     while (n > 0)
//     {
//         n = n/10;
//         count++;
//     }
//     printf("%d \n", count);
//     while ( n>0){
//         digit = n %10;
//         rev= pow(digit,count);
//         sum = sum + rev;
//         n = n/10;
//     }
//     if(sum==n){
//         printf("Armstrong ");
//     }
//     else {
//         printf("Not Armstrong");
//     }
//     return 0;
// }
//  Calculate the Salary for Overtime .

// int main()
// {
//     int salary, hour, hour1, workers = 10;
//     printf("Enter the hour to work: ");
//     scanf("%d", &hour);

//     if (hour > 40)
//     {
//         hour1 = hour - 40;
//         salary = hour1*12;
//         printf("Total salary to pay for Overtime to employees = %d",salary*10);
//     }
//     else {
//         printf("No Overtime ");
//     }

//     return 0;
// }


// 2: Factorial :

// int main (){
//     int num ,fac=1 ;
//     printf("Enter the Number : ");
//     scanf("%d",&num);

//     for (int i=num ; i>=1 ; i--){
//         fac=fac * i;



//     }
//     printf("Factorial is : %d",fac);

//     return 0;
// }

// 3 :
//  int main (){
//     int i;
//     for (i=0 ; i<=255 ; i++){
//         printf("%c\n",i);
//     }
//     return 0;

// }

// 4 : print all number between 1 to 500
 #include<math.h> 

// int main (){

//     int num , count =1, rem ,sum ;
//     while(count<=500){

//         num = count;
//         sum =0;

//         while(num){
//             rem = num %10;
//             sum = sum +(rem *rem *rem);
//             num = num/10;

//         }
//         if(count ==sum ){
//             printf("%d is a Armstrong Number . \n",count);

//         }
//         count++;
//     }

   
      
    
//     return 0;

// }

// 5 :  Write a C program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
// – There are 21 matchsticks.
// – The computer asks the player to pick 1, 2, 3 or 4 matchsticks.
// – After the person picks, the computer does its picking.
// – Whoever is forced to pick up the last matchstick loses the game.


// int main (){
// int m=21 , p , c;
// while(1){
//     printf("\n Number of MatchStick left =  %d \n" , m);

//     printf("Pick of 1 or 2 or 3 or 4 matches \n");
//     scanf("%d",&p);

//     if(p>4 || p<1)
//         continue;

//     m= m-p;
//     printf("Number of matchStcik left = %d \n", m);

//     c=5-p;

//     printf("Out of which computer picked up %d \n", c);

//     m=m-c;

//     if(m==1){
//         printf("\n Number of match Stick left = %d \n",m);

//         printf("You lost the Game \n");
//         break;
    
//     }
    

// }return 0;
// }

// 6 : number wants a user till the and end  display number of positive  , negative , zero number.
// #include<stdio.h>
// // #include<conio.h>
// int main()
// {
//     int i, num, count_p=0, count_n=0, count_z=0;
//     int arr[100];
//     //size of array
//     printf("Enter Numbers: ");
//     scanf("%d", &num);

//     //take input from user for "num" numbers

//     for(i=0;i<num;i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     //count the numbers
//     for(i=0;i<num;i++)
//     {
//         //check for positive numbers
//         if(arr[i]>0)
//         {
//             count_p++;
//         }
//         else if(arr[i]<0)
//         {
//             count_n++;
//         }
//         else if(arr[i]==0)
//         {
//             count_z++;
//         }
//         else
//         {
//             printf("Wrong Entry");
//             break;
//         }
//     }
//     printf("Positive Numbers: %d\n", count_p);
//     printf("Negative Numbers: %d\n", count_n);
//     printf("Zero Numbers: %d\n", count_z);
// }


// 7 : to receive an integer and find octal number .

// int main(){
//     int num ,rem =0 , oct =0 , place =1;
//     printf("Enter the Number : ");
//     scanf("%d",&num);

//     while(num){
//         rem = num%8 ;
//         oct = (rem*place)+oct;
//         num=num/8;
//         place = place *10;





//     }
//     printf("%d",oct);
//     return 0;
// }
// 7
// int main()  
// {  
//     int num, oct = 0, rem = 0, place = 1;  
  
//     printf("Enter a decimal number\n");  
//     scanf("%d", &num);  
  
//     printf("\nOctal Equivalent of %d is ", num);  
//     while(num)  
//     {  
//         rem = num % 8;  
//         oct = oct + rem * place;  
//         num = num / 8;  
//         place = place * 10;  
//     }  
//     printf("%d\n", oct);  
  
//     return 0;  
// } 



// 8 : print all prime number in range .
// int main (){
//     int i ,flag =1;
    
//     for( i=1 ; i<=300 ; i++){
//         flag=1;
//         for(int j=2 ; j<i; j++){
//             if(i%j==0){
//                 flag=0;
//                 break;

//             }
//         }
//        if(flag==1){
//         printf("%d\n",i);
        
        
//        }
//     }
//     return 0;
// } 


