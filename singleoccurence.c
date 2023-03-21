#include <stdio.h>
int main (){
    int arr[]={1,2,2,3,3,3,4,5};
    int size=8;
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size;j++){
            if(arr[i]==arr[j]){
                count++;

            }
        }
        if(count==0){
            printf("%d",arr[i]);

        }
        count=0;
        // printf("Arraya is : \n");
        // for(int i=0 ; i<size; i++){
        //     printf("%d",arr[i]);
        // }
    }
    return 0;
}