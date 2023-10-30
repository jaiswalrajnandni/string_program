//Write a program in C to check given character is vowel or consonant.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char ch;
    printf("Enter the Character: ");
    scanf("%c",&ch);
    if((ch >= 'a' && ch<='z')||(ch>='A' && ch<='Z')){
     if(ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U' || ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u')
       printf("Given Character %c is Vowel.\n",ch);
     else
       printf("Given Character %c is Consonent.\n",ch); 
    }  
    else
       printf("Given Character %c is neither a vowel nor a consonant.\n",ch);   
    return 0;
}