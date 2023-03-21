#include<stdio.h>
int main (){
    int arr[]={1,2,3,4,5};
    int size = 5;
    int small=9999 , small_pos=0;
    int large=-9999,large_pos=0;

    for(int i=0 ;i<size ; i++){
        if(arr[i]<small){
            small=arr[i];
            small_pos=i;

        }
        if(arr[i]>large){
            large=arr[i];
            large_pos=i;
        }
    }

    printf("%d is the largest number at the index of %d\n",large,large_pos);
    printf("%d is the smallest number at the index of %d\n",small,small_pos);

    int temp ;
    temp = arr[large_pos];
    arr[large_pos]=arr[small_pos];
    arr[small_pos]=temp;

    printf("Array of element is : \n");
    for(int i=0; i<size; i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}