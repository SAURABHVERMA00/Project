#include<stdio.h>
int main(){
    int arr[10]={1 ,2, 3, 4, 5};
    int pos=3  , value=6 , size=5;
    for(int i= size-1 ; i>=pos ; i-- ){
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    printf("Resultanat value : ");
    for (int i=0; i<=size ; i++){
        printf("%d",arr[i]);
    }
     


    return 0;
}

// //  sorted  array

// // #include <stdio.h>
// int main (){
//     int arr[100]={1,2,3,5,6};
//     int size =5;
//     int pos=4,value=4;
//     for(int i=0 ; i<size ; i++){
//         if(arr[i]>value){
//             for(int j=size-1 ; j>=i; j--){
//                 arr[j+1]=arr[j];


//             }
//             arr[i]=value;
//             break;
//         }
        
//         }
//         for(int i=0; i<=size ; i++){
//             printf("%d",arr[i]);
//     }



//     return 0;
// }
int main (){
    int arr[100]={1,2,3,5,6};
    int size=5;
    int pos=3,value=4;

    for(int i=0; i<size;i++){
        if(arr[i]>value){
            for(int j=size-1; j>=i;j--){
                arr[j+1]=arr[j];
            }
            arr[i]=value;
            break;

        }
    }
    printf("Array is ;");
    for(int i=0; i<=size ; i++){
            printf("%d",arr[i]);
    }


    return 0;
}
