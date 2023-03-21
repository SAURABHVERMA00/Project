#include <stdio.h>
#include<math.h>
sum of  N natural number .

int main (){
    int num ,sum = 0 ;
    printf("Enter the Number : ");
    scanf("%d",&num);
    

   

    
    
    
 
    int i =1;
    while(num>=i){
        sum=sum+i;
        i++;
    }
     printf("Sum of %d natural number is %d",num , sum  );
    return 0 ;
       }
    
//  2 : Armstrong Number 

int main (){

    int num , last , len=0 , arm , sum;
    printf("Enter the number : ");
    scanf("%d",&num);
    int temp =num;
    while(temp>0){
     last = temp %10;
       
        temp = temp /10;
        len++;

    }
     while(num>0){

   int sum =0;
            
            int digit = num%10;
            arm = pow(digit , len);
            sum = sum + arm;
            num= num/10;


   } 
   printf("%d",sum);
  




    return 0;
}

 