// # include<stdio.h>
// int main(){
//     int ID, rollNo;
//     printf("Enter your group : ");
//     scanf("%d", &ID);
//     printf("ID : %d \n" , ID);

//     switch(ID){
//         case 15: 
//         printf("Enter the Roll No :");
//         scanf("%d", &rollNo);
//         switch (rollNo){
//             case 1:
//             printf("Welcome to CSE");
//             break;
//              case 2:
//             printf("Welcome to CSE");
//             break;
//              case 3:
//             printf("Welcome to CSE");
//             break;
//              case 4:
//             printf("Welcome to CSE");
//             break;
//              case 5:
//             printf("Welcome to CSE");
//             break;
//             default:
//             printf("Enter the VAlid Roll No ");
//             break;
//         }
//         break;
//         case 17: 
//         scanf( "%d", &rollNo);
//         switch (rollNo){
//             case 1:
//             printf("Welcome to CSE");
//             break;
//              case 2:
//             printf("Welcome to CSE");
//             break;
//              case 3:
//             printf("Welcome to CSE");
//             break;
//              case 4:
//             printf("Welcome to CSE");
//             break;
//              case 5:
//             printf("Welcome to CSE");
//             break;
//              default:
//             printf("Enter the VAlid Roll No ");
//             break;
//         }
        
//         break;
//         case 19: 
//         scanf(" %d", &rollNo);
//         switch (rollNo){
//             case 1:
//             printf("Welcome to CSE");
//             break;
//              case 2:
//             printf("Welcome to CSE");
//             break;
//              case 3:
//             printf("Welcome to CSE");
//             break;
//              case 4:
//             printf("Welcome to CSE");
//             break;
//              case 5:
//             printf("Welcome to CSE");
//             break;
//              default:
//             printf("Enter the VAlid Roll No ");
//             break;
//         }
//         break;
//         default:
//         printf("Enter the Valid ID");
//         break;

//     }
    
//     return 0;

// }

// # include <stdio.h>
// int main(){
    
//     int ID, RollNo;
//     printf("Enter the Group : ");
//     scanf("%d" , &ID);
//     printf("ID : %d" , ID);
//     switch(ID){
//         case 15:
//         case 17:
//         case 19:
//         printf("Enter the Roll No : ");
//         scanf("%d", &RollNo);
//         printf("Roll No %d" RollNo);
//         case 1...5 :
//         printf("Welcome to the CSE");
//         break;
//         default:
//         printf("Enter the Valid Roll No ");
//         break;
//     }
//     default:
//     printf("Enter the VAlid ID");
//     break;
    
    
    
    
//     return 0;
// }

#include<stdio.h>
int main(){
    char operand;
    int num1, num2; 
    
    printf("Enter the Operand :");
    scanf("%c", &operand);
    printf("Enter the value of num1 :");
    scanf("%d", &num1);
    printf("Enter the value of num2 :");
    scanf("%d", &num2);
   

    switch(operand){
        case '+':
        printf("Sum of number  is : %d + %d = %d", num1 , num2, num1+num2);
        break;
        case '-' :
        printf("Difference of Number is : %d", num1-num2);
        break;
        case '*' :
        printf("Multiply of Number is :%d", num1*num2);
        break;
        case '/' :
        printf("Division of Number is : %d", num1/num2);
        break;
        default:
        printf("Invalid operand ");
        break;
    }





    return 0;
}