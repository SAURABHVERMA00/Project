#include <stdio.h>
// int main (){
//     int arr[6] ;
//     for(int i=0 ; i<5; i++){
//         scanf("%d",&arr[i]);

//     }
//     for(int j=0 ; j<5 ; j++)
//     {
//         for(int i=0 ; i<5; i++){
//         if(arr[i]>arr[i+1]){
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1]= temp;
//         }
//     }
// }

//     for(int i =0 ; i<5; i++)
//     {
//         printf("%d ",arr[i]);
//     }

// //     return 0;
// // }
// int linear_Search(int arr[], int key );


// int main (){

//     int arr[5], key,index;
//     printf("Enter the key  ");
//     scanf("%d",&key);
//     printf("Enter the Array ");
//     for(int i=0 ; i<5 ; i++){
//         scanf("%d",&arr[i]);

//         index =  linear_Search(arr ,  key );
//         if(index == -1  ){
//             printf("Not Found");
//             break;
//         }
//         else {
//             printf("Found");
//             break;
//         }
       
    
//     } 
//     return 0;
//     }
//    int linear_Search(int arr[], int key ){
//     for(int i=0 ; i<5 ; i++){
//         if(arr[i]==key ){
           
//             return i;
//         }
        
//     }
//     return -1;
//    }

//  Bubble Sort 

// int bubble_sort (int arr[]);
// int printArray(int arr[]);

// int main (){
//     int arr[]= { 1,2,3,4,5};
   
   

//     bubble_sort(arr);
//     printf("Sorted Array \n");
//     printArray(arr);


//     return 0;
// }

// int bubble_sort (int arr[]){
//     for (int i=0; i<5 ; i++){
//         for(int j=0; j<5-i ; j++){
//             if (arr[j]>arr[j+1]){
//                 //  Swap
//                 int temp = arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;


//             }
//         }
//     }
// }
// int printArray(int arr[]){
//     for(int i=0 ; i<5 ; i++){
//         printf("%d",arr[i]);
//     }
// }



// int sum(int arr[]);
// int main (){

//     int arr[]= {1,2,3,4,5};
//     printf(" Sum of Array is : %d",sum(arr));


//     return 0;
// }
// int sum(int arr[]){
//     int sum =0;
//     for(int i=0 ; i<5; i++){
//         sum = sum+arr[i];
//     }
//     return sum;
    
// }
// int n=5;
// void largest_number(int arr[n]);
// int main (){
//     int arr[n];
//     for(int i=0; i<5 ; i++){
//         scanf("%d",&arr[i]);
//     }

//     largest_number(arr);
//     return 0;

// }
// void largest_number(int arr[n]){
//     for(int i =0 ; i<5 ;i++){
//         for(int j=0 ; j<5; j++){
//             int temp = arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
//     printf("The Largest Number is : %d",arr[n]);

// }
// void reverse (int arr[]);
// int main (){
//     int arr[5];
//     for(int i=0; i<5 ; i++){
//         scanf("%d",&arr[i]);
//     }

//     reverse(arr);
//     return 0;

// }
// void reverse(int arr[]){
//     int arr1[10];

//     for(int i=0 ; i<5 ; i++){
//         arr1[i]=arr[5-i-1];

//     }
//     printf("The reverse number is:");
//    for(int i=0; i<5 ; i++){
//     printf("%d ",arr1[i]);

//    }

// }

// 7 : Insert number in array
// int  insert_array ();
// int main (){
//     int num ; 
//     printf("Enter the number : ");
//     scanf("%d",&num);

    
//     return 0;
// }
// int  insert_array (){
//     int arr[100];

    
        
//     }












