//C program to check given character is digit or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char ch;
    printf("Enter the Character: ");
    scanf("%c",&ch);
    if(ch >= '0' && ch<='9')
       printf("Given Character %c is Digit.\n",ch);
    else
       printf("Given Character %c is not Digit\n",ch);  
    return 0;
}