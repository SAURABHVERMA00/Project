 #include<stdio.h>
// void inputarray(int arr[],int size);
// void printarray(int arr[] , int size);
// void smallest(int arr[],  int size , int small , int pos);

// int main (){
//     int arr[5],size=5 , small, pos;
//     inputarray(arr,size);
//     printarray( arr ,  size);
//     smallest(arr,   size , small ,  pos);
//     return 0;
// }
// void inputarray(int arr[],int size){
//     printf("Enter the Element of Array :");
//     for(int i=0 ; i<size ; i++){
//         scanf("%d",&arr[i]);
//     }
// }

// void printarray(int arr[] , int size){
//     printf("Array Element is : ");
//     for(int i=0; i<size ; i++){
//     printf("%d",arr[i]);
//     }

// }

// void smallest(int arr[],  int size , int small , int pos){
   
//     small = arr[0];
//     for(int i=1 ; i<size; i++){
//         if(arr[i]<small){
//             small=arr[i];
//             pos=i;
//         }
//     } 
//     printf("\n Smallest Number is an Array is %d: ",small);
//     printf("\nPosition of smallest  Number is an Array is %d: ",pos);

// }
//  printf of Subarray
int main(){
    int A[] = {1,2,3,4,5};
    int len=sizeof(A)/sizeof(int);
    for( int i=0; i<len; i++ ){
        for( int j=i; j<len; j++ ){   // Now A[i..j] is the subarray
            for( int k=i; k<=j; k++ )
                printf("%d ", A[k]);
            printf("\n");
        }
    }
    return 0;
}

