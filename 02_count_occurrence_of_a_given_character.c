//Write a program in C to count occurrence of a given character in a string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int countOccurrence(char *str, char c){
    int i,count=0;
    int len = strlen(str);
    for(i=0; i<len; i++){
        if(str[i] == c){
            count++;
        }
    }
    return count;
}
int main(){
    int cou;
    char str[100],c;
    printf("Enter a String: ");
    fgets(str, 100, stdin);
    printf("Enter a charecter you want to count: ");
    scanf("%c", &c);
    cou = countOccurrence(str, c);
    printf("Total occurence of '%c':%d",c,cou);
    return 0;
}