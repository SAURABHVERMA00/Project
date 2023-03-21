// # include<stdio.h>
// #include<ctype.h>
// int main(){

//     // char a;
//     // a=getchar();

//     // if(a=='s'){
//     //     printf("your are the best");
//     // }

//     // char a[20];

// //    if(isalpha(a)){
// //     printf("You");
// //    }
// //    else{
// //     printf("nice");
// //    }

// // putchar(toupper(a));
// // gets(a);
// // puts(a);

// // char a;
// // a=getch();
// // printf("%c" , a);

// // int marks;
// // printf("Enter hte marks");
// // scanf("%d", &marks);

// // switch(marks>30){
// //     case 1: printf("Pass");
// //     break;
// //     case 0: printf("Fail");
// //     break;

// // }
// int num;
// printf("Enter the number : ");
// scanf("%d", &num);

// switch(num/10){
//     case 9:
//     printf("A");
//     break;
//      case 8:
//     printf("B");
//     break;
//      case 7:
//     printf("C");
//     break;
//      case 6:
//     printf("C");
//     break;
//      case 5:
//     printf("D");
//     break;
//      case 4:
//     printf("D");
//     break;
//      case 3:
//     printf("E");
//     break;
//      case 2:
//     printf("F");
//     break;
//     default:
//     printf("No");
//     break;

// }

//     return 0;

// }

// #include <stdio.h>
// #include <Math.h>

// int main()
// {
//     int num, count = 0;

//     printf("Enter the Number : ");
//     scanf("%d", num);

//     while (num > 0)
//     {
//         num = num / 10;
//         count += 1;
       
//     }
//     printf("%d", count);

//     return 0;
// }

#include <stdio.h>
int main (){
    int num ,flag =1;
    
        printf("Enter the  Number : ");
        scanf("%d",&num);
      
        for(int j=2 ; j<num; j++){
            if(num%j==0){
                flag=0;
                break;

            }
        }
       if(flag==1){
        printf("Prime Number .");
        
        
       }
       else {
        printf("Not a prime");
        
       }
    
    return 0;
} 


