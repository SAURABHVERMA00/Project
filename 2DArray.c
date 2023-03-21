#include <stdio.h>
int main (){
    int size =2;




int arr1[2][2]={{1,2},{2,3}};
int arr2[2][2]={{3,2},{2,4}};
int arr3[2][2]={};

for(int i=0;i<size ; i++){
    for(int j=0; j<size; j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];

    }
}
for(int i=0; i<size ; i++){
    for(int j=0; j<size; j++){
        printf(" %d ",arr3[i][j]);
    }
    printf("\n");
}

}



