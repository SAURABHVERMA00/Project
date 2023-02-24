#include <stdio.h>
int main(){

    // int i ;
    // for(i=0 ; i<4 ;i++){
    //     printf("*****\n");
    // }


    // 2 :
    // int i, j ;
    // // printf("Enter the Row ");
    // // scanf("%d",n);
    // for(int i =1; i<=5 ; i++){
    //     //  inner 
    //     for(int j=1; j<=5 ; j++){
    //         printf("%d",j);
    //     }
    //     printf("\n");

    // }

    // for(int i=9; i>0; i--){
    //     printf("%d",i);
    // }


    // 3 : 

    // for(int i=1; i<=5 ; i++){
    //     for(int j=1 ; j<=5 ; j++){
    //         printf("%d",i);
    //     }
    //     printf("\n");
    // }

    //  4 :

    // for(int i=1 ; i<=5 ; i++){
    //     for(int j =1 ; j<=5 ; j++){
    //         if(i==1  || i == 5 || j==1 || j==5){
    //             printf("s ");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // } 

    for(int i=1; i <=5 ; i++){
        //  spaces
        for(int  j=1 ; j<(5-i); j++){
            printf(" ");

        }
        //  star
        for(int j=1 ; j<=(2*j-1) ; j++){
            printf("*");
        }
        printf("\n");
    }
      

    return 0;
}