//Write a program in C to check a string is palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    int len,i,temp=0;
    char str[20];
    printf("Enter the String: ");
    scanf("%s",str);
    len = strlen(str);
    for(i=0; i<len; i++){
        if(str[i] != str[len-i-1]){
            temp=1;
            break;
        }
    }
    if(temp==0)
       printf("String is a Palindrome");
    else
       printf("String is not palindrome");   
    return 0;
}