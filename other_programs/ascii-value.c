// •	Print Ascii Value of the Character
#include <stdio.h>

void ASCII_value(char);
int main() 
{
    char c ;
    printf("Enter character : ");
    scanf("%c",&c);

    ASCII_value(c);
    return 0;

}
void ASCII_value(char c){
    printf("ASCII value %c is = %d",c,c);
}