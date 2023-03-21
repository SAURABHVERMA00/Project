#include<stdio.h>


// int main (){
//     int age = 22;
//     int *ptr = &age;
//     printf("%u\n",ptr);
//     ptr--;
//     printf("ptr = %u\n",ptr);


//     return 0;
// }


//  Traverse an Array.
// int main (){
//     int aadhar[5];
//     int *ptr = &aadhar[0];

//     for(int i=0 ; i<5 ; i++){
//         printf("%d index : ",i);
//         scanf("%d",ptr+i);

//     }
//     //  output
//     for(int i=0; i<5 ; i++){
//         printf("%d index = %d\n",i,*(ptr+i));
//     }
    
//     return 0;
// }

//  3 :
// void printNumber(int *arr, int size); 
// int main () {
//         int size =5;
//         int arr[]= {1,2,3,4,5};
//         printNumber(arr,size);

//     return 0;
// }

// void printNumber(int *arr, int size){
//     for(int i=0; i<size ; i++){
//         printf("%d\t",arr[i]);

//     }
//     printf("\n");
// }

//  Linear search 
void printArray(int arr[],int size);
void linear_search(int arr[], int size , int key );
void largest_number (int arr[], int size, int pos, int largest);
void binary_search(int arr[], int size , int key , int pos  );
void pair_array(int arr[], int size );

void reverse_array(int arr[],int size );

// void print_subarray(int arr[], int size );

void max_subarray( int arr[], int size);

int main (){
    int arr[10] , size=5 , key = 4, found =0,pos, largest, start , end ;
    printf("Enter the element of Array : ");
    for(int i=0; i<size ; i++){
        scanf("%d",&arr[i]);

    }   
     max_subarray(  arr,  size);
    return 0;
    
}
void printArray(int arr[],int size){
    for(int i=0 ; i<size ; i++){
        printf("%d",arr[i]);
    }
}

void   linear_search(int arr[], int size , int key ){
    for(int i=0 ; i<size ; i++){
        if(arr[i]==key){
            printf("The index is : %d", i);
            
        } 
    }  printf("Not found ");

}

void largest_number (int arr[], int size, int largest , int pos ){
     largest= arr[0];
    for(int i=1 ; i<size ; i++){
        if(arr[i]>largest){
            largest=arr[i];
            pos=i;
        }
    }
    printf("the largest number is %d and the index is %d",largest, pos);
}

void binary_search(int arr[], int size , int key, int pos ){
    int start = 0;
    int end = size-1;
    while ( start <=end){
        int mid = (start+end) /2;
        //  comparison 
        if ( arr[mid]==key){
            pos=mid;

        }
        if(arr[mid]<key){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
    }
printf("The index of key is : %d", pos);
}

void reverse_array(int arr[],int size ){
    printf("The revers earray is :");
    for(int i=size-1 ; i>=0 ; i--){
        printf("%d",arr[i]);
    }
}

void pair_array(int arr[], int size ){
    printf("Pairs are : ");
    for(int i=0 ; i<size ; i++){
        int curr=arr[i];
        //  inner 
        for(int j=i+1 ; j<size ; j++){
            printf("(%d,%d)",curr,arr[j]);
        }
        printf("\n");
    }
}

void max_subarray( int arr[], int size){
    int max_sum =100, curr_sum =0;
    for(int i=0; i<size; i++){
        int start =i;
        int end;
        for(int j=i ; j<size ; j++){
            end=j;
            curr_sum=0;
            for(int k=start; k<=end ; k++){
                curr_sum+=arr[k];
            }
            printf("\t %d",curr_sum);
            if(curr_sum<max_sum){
                max_sum=curr_sum;
            }
        }
    }
    printf("\nMAxsum of subarray is :%d ",max_sum);

}

    


