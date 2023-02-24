#include <stdio.h>
// int main (){
    // int num1 , num2;
    // printf("Enter the number num1 :");
    // scanf("%d",&num1);
    // printf("Enter the number num2 :");
    // scanf("%d",&num2);
    // int temp=num2%10;
    // printf("The multiplication of _____________%d\n",num1);
// void main()

// {

// int x = 5;

// if (x < 1);

// printf("Hello");

// }
// int main()

// {

// switch (printf("Do"))

// {

// case 1:

// printf("First\n");

// break;

// case 2:

// printf("Second\n");

// break;

// default:

// printf("Default\n");

// break;
// // }
// int main(){
//     int num1 , num2 ,i , j,flag_var ;
//     printf("Enter the number : ");
//     scanf("%d%d",&num1);
//   for(i=num1+1; i<num2; i++)
//    {
//       flag_var=0;
//       for(j=2; j<=i/2; ++j)
//       {
//          if(i%j==0)
//          {
//             flag_var=1;
//             break;
//          }
//       }
//       if(flag_var==0)
//          printf("%d\n",i);
// //   }
// flag_var=0;
//       for(j=2; j<=i/2; ++j)
//       {
//          if(num1%j==0)
//          {
//             flag_var=1;
//             break;
//          }
//       }
//     if(flag_var==0){
//         printf("Prime Number ");
//     }
//     else{
//         printf("No Prime");
//     }
    
//      return 0; 
// }
int main(){
    int n,sum=0,rev;
    int ch='A',ch1;
    printf("Enter the Number");
    scanf("%d",&n);
    while(n>0){
        rev=n%10;
        sum=sum+rev;
        n=n/10;
    }
    ch1 = (int)ch+sum-1;
    printf("%c",ch1);

    return 0;
}