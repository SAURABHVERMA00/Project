#include<stdio.h>
#include<Math.h>

// 1: Swap Number.

void swap(int a , int b);

int main (){
    // int a =1;
    // int b=2;
    
  swap(1,2);


    return 0;
}
void swap (int a, int b){
    // int temp
    int temp = a;
        a=b;
        b=temp;

   printf("%d",a);
   printf("%d",b);
}