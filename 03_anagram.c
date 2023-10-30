//Write a program in C to check if two string are Anagram.
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int len1,len2,i,j;
    char str1[100], str2[100],temp;
    printf("Enter the first String: ");
    fgets(str1, 100, stdin);
    printf("Enter the second String: ");
    fgets(str2, 100, stdin);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 != len2){
         printf("Given String are not anagram");
         return 0;
    }
    for(i=0; i<len1-1; i++){
        for(j=i+1; j<len1; j++){
            if(str1[i] > str1[j]){
                temp = str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
            if(str2[i] > str2[j]){
                temp = str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    for(i=0; i<len1; i++){
        if(str1[i] != str2[i]){
            printf("Given Strings are not Anagram");
            return 0;
        }
    }
    printf("Given Strings are Anagram");
    return 0;
}