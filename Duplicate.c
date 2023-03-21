#include<stdio.h>
// // int main (){
//     int arr[]={1,2,2,2,4};
//     int size =5 , flag=0;
//     for(int i=0; i<size ; i++){
//         for(int j=i+1; j<size; j++){
//             if(arr[i]==arr[j] && i!=j){
//                 flag=1;
//                 printf("\n Duplicate number %d found at location of %d and %d ",arr[i],j);
//             }
//         }
//     }
//     if(flag==0){
//         printf("\n No Duplicate ");
//     }
//     return 0;
// }
// int main (){
//     int arr[]={1,2,2,4,5};
//     int size =5; 
//     for(int i=0; i<size ; i++){
//         for(int j=i+1; j<size ; j++){
//             if(arr[i]==arr[j]){
//                 //  deletion process 
//                 for(int k=j ; k<size; k++){
//                     arr[k]=arr[k+1];
//                 }
//                 size--;
//                 j--;
//             }
//         }
//     }
//     printf("Array is : ");
//     for(int i=0; i<size; i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

// int main (){
//     int arr[]={1,2,2,3,4,5};
//     int size=6;
//     int count=0;
//     for(int i=0; i<size; i++){
//         for(int j=0; j<size+1;j++){
//             if(arr[i]==arr[j]){
//                 count++;

//             }
//         }
//         if(count==1){
//             printf("%d",arr[i]);

//         }
//         count=0;
//         // printf("Arraya is : \n");
//         // for(int i=0 ; i<size; i++){
//         //     printf("%d",arr[i]);
//         // }
//     }
//     return 0;
// }
int main (){
    int arr[]={1,2,2,3,4,5};
    int size=6;
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size+1;j++){
            if(arr[i]!=arr[j]){
                printf("%d",arr[i]);
                break;

              

            }
            break;
        }
        // if(count==1){
        //     printf("%d",arr[i]);

        // }
        // count=0;
        // printf("Arraya is : \n");
        // for(int i=0 ; i<size; i++){
        //     printf("%d",arr[i]);
        // }
    }
    return 0;
}