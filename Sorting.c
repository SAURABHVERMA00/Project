#include<stdio.h>
// void printArray(int arr[],int size);
// void bubble_sort(int arr[], int size );

// void selection_sort (int arr[],int size );
// int main (){
//     int arr[10], size =5; 
//     printf("Enter the element of Array : ");
//     for(int i=0; i<size ; i++){
//         scanf("%d",&arr[i]);

//     }   
//     selection_sort(arr,size);
//     printArray(arr,size);
 
//     return 0;
// }
// void printArray(int arr[],int size){
//     for(int i=0 ; i<size ; i++){
//         printf("%d",arr[i]);
//     }
// }


// void bubble_sort(int arr[], int size ){
//     for(int i=0 ; i<size ; i++){
//         //  inner loop 
//          for (int j =0 ; j<size -1-i ; j++){
//             if(arr[j]>arr[j+1]){
//                 //  swap 
//                 int temp ;
//                 temp = arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1]= temp ;


//             }
//          }
//     }
    
// }
// void selection_sort (int arr[],int size ){
//     for(int i=0 ; i<size-1; i++){
//         int minpos=i;
//         //  inner loop
//         for(int j=i+1 ; j<size ; j++){
//             if(arr[minpos]>arr[j]){
//                 minpos=j;

//             }

//         }
//         //  swap 
//         int temp ;
//         temp =arr[minpos];
//         arr[minpos]=arr[i];
//         arr[i]=temp;

//     }
// }

int main (){
    int num;
    scanf("%d",&num);
    int rev=0;
    int last;
    int n=num;
    while(num>0){
        last =num%10;
        rev=(rev*10)+last;
        num = num/10;

    }
    // printf("%d",rev);
    if(n==rev){
        printf("%d",n);
    }
    
    return 0;
}