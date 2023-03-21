#include <stdio.h>
//  1 : 
// *****

// *****

// *****

// *****
// int main (){
//     int row;
//     printf("Enter the row : ");
//     scanf("%d",&row);
//     for(int i=0 ; i<row ; i++){
//         printf("****\n");
//     }


//     return 0;
// }

// 2 : 
// 12345

// 12345

// 12345

// 12345

// 12345

// int main (){
//     int row ; 
//     printf("ENter the Row : ");
//     scanf("%d",&row);

//     for(int i=0 ; i<row ; i++){
//         for(int j=1 ; j<=row ; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 3 : 
// 11111

// 22222

// 33333

// 44444

// 55555

// int main (){

//     int row=5 ;
//     int k=1;
//     for(int i=0 ; i<row ; i++){
       
//         for(int j=1 ; j<=row ; j++){

//             printf("%d",k);
//         }
//         printf("\n");
//         k++;
//     }

//     return 0 ;
// }


// 4 :
// S S S S S

// S       S

// S       S

// S       S

// S S S S S
// void hollw_rectangle(int row, int col);

// int main (){
//     int row =5 ,col=5;
//     hollw_rectangle( row,col);
    
//     return 0;
// }
// void hollw_rectangle(int row, int col){
//     for(int i = 1   ; i<=row; i++){
//         //  inner loop
//         for(int j=1 ; j<=col ; j++){
//             //  cells(i,j)
//             if(i==1 || i==row || j== 1 || j== col ){
//                 //  boundary
//                 printf("S ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
    
// }

// 5 :
// 1

// 12

// 123

// 1234

// 12345

// int main (){
//     int row=5 , col =5;
//     for(int i=1 ; i<=row ; i++){
//         //  inner loop 
//         for(int j=1 ; j<=i ;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 6 :
// 12345

// 1234

// 123

// 12

// 1
// void paalindrome (int row);
// int main (){
//     int row =5 ;
//      paalindrome (row);

//     return 0;
// }

// void paalindrome (int row){

//     for(int i=1 ;  i <= row ; i++){
//         //  inner loop 
       
//         for(int j=1 ; j<=row-i+1; j++){
//             printf("%d",j);
           
//         }
//         printf("\n");
//     }

// }


//  7 :
//         *
//      *  *  *
//  *   *  *  * *
//  * 
// int main (){
//     int row=4;

//     for(int i=1 ; i<=row ; i++){
//         //  inner loop
//         //  spaces 
//         for(int j=1 ; j<=row-i ; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=(2*i)-1  ; j++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// 8 :

// int main (){
//     int row =5;

//     for(int i=1 ; i<=row ; i++){
//         //  inner loop
//         //  spaces
//         for ( int j=1; j<=row -i ; j++){
//             printf(" ");
//         }

//         //  number 
//         for (int j=1; j<=i ; j++ ){
//             printf("%d ",j);

//         }
//         printf("\n");


//     }

//     return 0;

// }

// 9 :
// int main (){
//     int row =5;

//     for(int i=1 ; i<=row ; i++){
//         //  inner loop
//         //  spaces
//         for ( int j=1; j<=row -i ; j++){
//             printf(" ");
//         }

//         //  number 
//         int k=1;
//         for (int j=1; j<=i ; j++ ){
//             printf("%d ",k);

//         }
//         printf("\n");


//     }

//     return 0;

// }

//  10;
// int main (){
//     int row =4; 
//      int k=row;

//     for(int i=1 ; i<=row ; i++){
//         //  spaces
//         for(int j=1 ; j<=i-1 ; j++){
//             printf(" ");
//         }
       
//         for(int j=1; j<=(2*k)-1 ; j++){
//             printf("*");

//         }
//         k--;
//         printf("\n");

//     }
//     return 0;
// }


// Write a program to find Prime Numbers Between Two Integers

// int main (){
//     int a , b;
//     printf("Enter the Number :");
//     scanf("%d%d",&a,&b);

//     if(a>=2){

//         for(int i =a+1 ; i<b ; i++){
//             int isPrime =1;
//             for(int j=2 ; j<=i/2; j++){
//                 if(i%j==0){
//                     isPrime=0;
//                     break;
//                 }

//             }
//             if(isPrime){
//                 printf(" %d\n",i);
//             }
//         }
//     }
//     else {
//         printf("Enter the above number .");
//     }
//     return 0;
// }

#include<math.h>
// //     binary to decimal 
// int main (){
//     int bin =111,dec , last,sum =0,k=0;
//     while (bin>0){
//         last= bin%10;
//         dec = pow(2,k)*last;
//         sum=sum+dec;
//         k++;
//         bin = bin/10;

//     }
//     printf("%d",sum);
//     return 0;
// }

// 11 :

   
// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }
  
// int main()
// {
//     int n = 9;
//     printf("%d", fib(n));
//     getchar();
//     return 0;
// }

// void fiboonacci(int num,int a,int b , int sum );
// int main (){
//    int num =9;
// //    fiboonacci(num , 0,1,0);
// int a = 0 ,b = 1,c;
// printf("%d",a);
// while (b <= num)
// {   
//     c = a + b;
//     a = b;
//     b = c;
//     printf("\t%d", c);
// }

//     return 0;
// }
// void fiboonacci(int num,int a,int b , int sum ){


//     if(num!=0){
//         printf("%d",a);

//         sum =a+b ; 
//         a=b ;
//         b=sum;
//         num--;
//         printf("%d",sum);
//     }
   
    
//     }

//  Armstrong nUmber 
// #include<math.h>
// int main (){
//     int num , last,po,sum=0 ;
//     printf("ENter the number :");
//     scanf("%d",&num);
//     int n=num ;
//     int k=num;
//     int count=0;

//     while(n>0){
//         n=n/10;
//         count++;


//     }
    
//     while(num>0){
//         last=num%10;
//         po = last*last*last;
//         sum = sum +po;
//         num=num/10;



//     }
//     //  printf("%d",sum);
//     if(k==sum){
//         printf("Armstrong number ");
//     }
//     else{
//         printf("Not a Armstrong number");
//     }
//     return 0;
// // }

// //  sort 
// int main (){
//     int arr[]={1,4,2,5,3};
//     int size = 5; 
//     for(int i=0 ; i<size-1; i++){
//         //  inner 
//         for(int j=i+1; j<size ; j++){
//             if(arr[i]>arr[j]){
//                 int temp ; 
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0; i<size; i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

//  linear serch 
// int main (){
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     int key=1, pos;
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             printf("Index at : %d",arr[i]);

//         }
//     }
//     return 0;
// }

//  sum 
// int main (){
//     int arr[]={1,2,3,4,5};
//     int size=5; 
//     int sum =0;
//     for(int i=0; i<size; i++){
//         sum =sum+arr[i];

//     }
//     printf("sum is %d",sum);
//     return 0;
// }

// int main (){
//     int arr[]={1,3,5,2,4};
//     int size=5;
//     int large;
//     large=arr[0];
//     for(int i=1; i<size; i++){
        
//         if(large<arr[i]){
//             large=arr[i];
//         }
//     }
//     printf("%d",large);
//     return 0;
// }

// int main (){
//     int arr[]={1,2,3,4,5};
//     int size=5; 
//     for(int i=size-1; i>=0;i--){
//         printf("%d",arr[i]);
//     }
//     return 0;

// }

//  insert 
// int main(){
//     int arr[10]={1 ,2, 3, 4, 5};
//     int pos=3  , value=6 , size=5;
//     for(int i= size-1 ; i>=pos ; i-- ){
//         arr[i+1]=arr[i];
//     }
//     arr[pos]=value;
//     printf("Resultanat value : ");
//     for (int i=0; i<=size ; i++){
//         printf("%d",arr[i]);
//     }
     


//     return 0;
// }

// delete;
int main (){
    int arr[]={1,2,3,4,5};
    int size=5;
    int pos=2,value=3;

    for(int i=pos; i<size; i++){
        arr[i]=arr[i+1];


    }
     printf("Resultanat value : ");
    for (int i=0; i<size-1 ; i++){
        printf("%d",arr[i]);
    }


    return 0;
}