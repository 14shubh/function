// •	Convert a Person’s Name in Abbreviated

#include <stdio.h>
void Abbrevation(char fname[20], char mname[20], char lname[20]){
    // print abbreviated name 
    printf("Abbreviated name: %c.%c.%s\n", fname[0], mname[0], lname);
}
int main()

{
    // person’s name
    char fname[20], mname[20], lname[20];
    // accept full name

    // First name...
    printf("Enter first name : ");
    scanf("%s", fname);

    // Middle name...
    printf("Enter middle name : ");
    scanf("%s", mname);

    // last name...
    printf("Enter last name : ");
    scanf("%s", lname);

    Abbrevation(fname,mname,lname);
    return 0;
}