#include<stdio.h>
#include<math.h>
// void second_max(int arr[],int size,int l1,int l2);
// int main (){
//     int size , l1,l2,first,second;

//     int arr[]={1,2,3,4,5};
//      size =5;
//      l1=0;
//      l2=0;
//      second_max(arr,size,l1,l2);
//     return 0;
// }

// void second_max(int arr[],int size,int l1, int l2){
//     for(int i; i<size; i++){
//         if(arr[i]>l1){
//             l2=l1;
//             l1=arr[i];
//         }
//         else if(arr[i]>l2 && arr[i]<l1){
//             l2=arr[i];
//         }
//     }
//     printf("\n First largest = %d",l1);
//     printf("\nSecond largsest = %d",l2);
// }

void secondmax(int arr[], int size );
int main (){
    int arr[]={1,2,3,4,5};
    int size=5;
    int l1=0,l2=0;
     secondmax(arr, size );
    


    
    return 0;
}
void secondmax(int arr[], int size ){
    int l1=0;
    int l2=0;
    for(int i=0; i<size ; i++){
        if(arr[i]>l1){
            l2=l1;
            l1=arr[i];

        }
        else if(arr[i]<l1 && arr[i]>l2){
            l2=arr[i];
        }
    }
    printf("second max : %d",l2);

}
