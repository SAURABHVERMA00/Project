#include<stdio.h>
int main (){
    int arr[]={1,2,3,4,5};
    int pos=1, value=3, size =5;
    for(int i=pos ; i<size;i++){
        arr[i]=arr[i+1];
    }

    for(int j=0; j<size-1; j++){
        printf("%d",arr[j]);
    }
    return 0 ;

}