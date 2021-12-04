// .	Copy one string to another string.

#include <stdio.h>

char copy_string(char str1[],char str2[]);

int main () {
    char str1[100],str2[100];
    printf("Enter a string : ");
    gets(str1);
    copy_string(str1,str2);
   return 0;
}
char copy_string(char str1[],char str2[]){

    int i;
    for(i=0; str1[i]!='\0'; i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("original : %s\n", str1);
    printf("copy : %s", str2); 

}