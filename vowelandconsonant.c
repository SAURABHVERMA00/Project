#include<stdio.h>
int main (){
    char a[50];
    int i, vow=0,con=0;
    printf("Enter the String ");
    gets(a);
    i=0;
    printf("%s",a);
    while(a[i]!='\0'){
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122)){

            if(a[i]=='a' || a[i]=='e' || a[i]=='i'|| a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I'|| a[i]=='O' || a[i]=='U' ){
                
                vow++;
            }
            else{
                
                con++;
            }
           

        }
         i++;
        
    }
    printf("the vowel is %d and the consonant is %d", vow,con);
  

    return 0;
}
