#include <stdio.h>
//    for a print a address of variavle 

// int main (){
//     int age = 22 ;
//     int *ptr = &age ;
//     // int _age = *ptr;

//     printf("%p\n",&age);
//     printf("%u\n",&age);
//     printf("%p\n",ptr);
//     printf("%u\n",ptr);
//     printf("%u\n",&ptr);
//     return 0;
// }



//  print value of variable 

// int main (){

//     int age = 22;
//     int *ptr = &age;

//     //  value

//     printf("%d\n",age);
//     printf("%d\n",*ptr);
//     printf("%u\n",*(&age));

//     return 0;
// }


// Output
// int main (){
//   int age =2;
//   int *ptr = &age;

//   printf("%u \n",&age);
//   printf("%u \n",ptr);
//   printf("%u \n",&ptr);

//   printf("%u \n",age);
//   printf("%u \n",*ptr);
//   printf("%u \n",*(&age));


//     int *ptr ;
//     int x;

//     ptr = &x;
//     *ptr = 0; 
//      printf("%u\n",x); //0
//      printf("%u\n",*ptr);

//     *ptr +=5;
//     printf("x = %d \n",x);
//     printf("x = %d ",*ptr);

//     (*ptr)++;
//     printf("x=%d \n",x);
//     printf("x=%d\n",*ptr);
//     printf("%u\n", &ptr);
      
     
     
//     return 0;
// }


//  Pointer to pointer  Syntax

// int main (){
//     float price ;
//     float *ptr =&price ;
//     float **pptr =  &ptr;

//     return 0;
// }


// Print the value of i from its pointer to pointer.

//  

//  Pointer in function  Call

//  Call by value : if we change variable in function then main fucntion variable does not affect


// void square (int num );
// void square1 (int* num);
// int main (){
//     int num =4;
//     square(num);
//     printf("The number is %d\n",num);
//     square1(&num);
//     printf("Square is = %d\n",num);
    
//     return 0;
// }
// void square (int num ){
//     num = num*num;
//     printf("Square is = %d\n",num);
// }
// void square1(int* num){
//     *num = (*num) * (*num);
//     printf("Square is = %d\n" , *num);
// }


//  Swap a and b;

// void swap (int a, int b );
// void _swap(int *a, int *b);
// int main (){
//     int x=1 ,y=2;
//     swap(x,y);
//     printf("a = %d\n",x);
//     printf("b= %d\n",y);

//     _swap(&x,&y);
//     printf("a = %d\n",x);
//     printf("b= %d\n",y);



     
    

//     return 0;
// }
// //  call by reference
// void _swap(int *a, int *b){
//     int *temp;
//     *temp=*a;
//     *a=*b;
//     *b=*temp;
    


// }



// //  call by value
// void swap(int a, int b){
//     int temp ;
//     temp = a;
//     a= b;
//     b=temp;

//     printf("a = %d\n",a);
//     printf("b= %d\n",b);

// }


//  1;
// void doWork(int a, int b , int *sum , int *prod , int *avg );
//  int main (){
//     int a=3, b=5 ;
//     int sum , prod , avg;
//     doWork(a,b , &sum , &prod, &avg);
//     printf("sum =%d,product =%d , average =%d",sum ,prod,avg);


    

//     return 0;
//  }
//  void doWork(int a, int b , int *sum , int *prod , int *avg){
//    *sum = a+b;
//    *prod = a*b;

//     *avg = (a+b)/2;
//  }

//  2 Program find maximum number between two number using pointer.

// void maxi(int *ptr1, int *ptr2 );
// int main (){
//     int a=2 ; int b=4;
//     int *ptr1=&a;
//     int *ptr2=&b;
//     maxi(&a,&b);




//     return 0;
// }
// void maxi(int *ptr1 , int *ptr2){
//     if(*ptr1>*ptr2){
//         printf("Mximum numbr is : %d",*ptr1);
//     }
//     else{
//          printf("Mximum numbr is : %d",*ptr2);

//     }
// }

//  3 Reverse order of array using pointer 
// void reverse(int )
void printArray(int arr[] , int size);
void sorted(int arr[],int size);
// int main (){
//     int  size;
//     printf("Size of array : ");
//     scanf("%d",&size);
//     int arr[size];
//     int *ptr = &arr[0];

//     for(int i=0; i<size; i++){
//         scanf("%d",ptr);
//         ptr++;

//     }
//     printArray(size , ptr);




//     return 0;

// }
// void printArray(int arr[] , int size){
//     for(int i=0; i<size ;i++){
//         printf("%d",arr[i]);
        
//     }

// }
// int main (){
//     int arr[5],size=5;
    
//     for(int i=0; i<size;i++){
//         scanf("%d",&arr[i]);

//     }
//     printArray(arr,size);
//     sorted( arr,size);
//     printArray(arr,size);

// }
// void sorted(int arr[],int size){
//     for(int i=0; i <size ; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[i]>arr[j]){
//                 arr[i]=arr[j];
//             }
//         }
//     }
// }


