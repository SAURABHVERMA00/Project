#include <stdio.h>

void swap (int *ptr , int *ptr1);
int print(int arr[100]);

int print1(int *arr1 );
int main (){
    int arr[100],arr1[100],temp , n , m ;

    printf("Enter the length of  array : ");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
            scanf("%d",&arr[i]);
    }

    printf("Enter the size of array2 : ");
    scanf("%d",&m);

    for(int i=0 ; i<m ; i++){
        scanf("%d",&arr1[i]);
    }

    swap(arr,arr1);
   

    return 0;
}
int print(int *arr ){
    for(int i=0 ; i<5; i++ ){
        printf("%d" , arr[i]);
    }
    
}

int print1(int *arr1 ){
    for(int i=0 ; i<5; i++ ){
        printf("%d" , arr1[i]);
    }
    
}

void swap (int *ptr , int *ptr1){

        int *temp ;
        temp = ptr;
        ptr = ptr1;
        ptr1 = temp;

         print(ptr );
         printf("\n");
         print1(ptr1);


}
