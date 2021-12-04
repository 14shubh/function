// •	Remove All Vowels From A String
#include <stdio.h>
#include <string.h>

int remove_vowel(char str[])
{

    int len = 0;
    len = strlen(str);

    // Accepting input.
    for (int i = 0; i < len; i++)
    {
        // Checking vowels.
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {

            // Deleting vowels.
            for (int j = i; j < len; j++)
            {
                // Storing string without vowels.
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
        str[len + 1] = '\0';
    }
    return (str);
}
int main()
{
    // Initializing variable.
    char str[100];

    printf("Enter a string : ");
    scanf("%s", str);

    printf("After deleting the vowels, the string will be : %s", remove_vowel(str));

    return 0;
}