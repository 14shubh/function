// •	Find the first occurrence of a character in a given string.

#include <stdio.h>
char occurence(char);
int main()
{
    char str[100];
    printf("Enter string and check first occurrence of a character");
    scanf("%s", str);
    occurence(str);
    return 0;
}
char occurence (char str[]){
    for(int i=0; str[i]!='\0'; i++){
        for(int j=1; str[j]!='\0'; j++){ 
            if(str[i]==str[j]){
                
            }
        }
    }
}