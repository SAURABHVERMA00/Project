#include<stdio.h>

int main(){
int a,b , lastdigit, mul, t=0,s=1,last ,last1;

printf("Enter the a and b : ");
scanf("%d %d",&a,&b);
int e=b;
while(b>0){
    lastdigit=b%10;
    mul=s*(a*lastdigit);
    t = (t)+mul;
    b= b/10;
    s=s*10;

}

// last= e%10;
// printf("The multiply of %d x %d is = \n",a,e);
// printf("   %d  \n",a);
// printf("x  %d\n",e);
// printf("  %d \n",a*last);
// last1=last%10;
// printf(" %d\n",last*a);

printf("%d",t);
return 0;
}