#include <stdio.h>

char vowelcheck(char arr[])
{
    int vowels, consonant, digit, space;

    vowels = consonant = digit = space = 0;
    for (int i = 0; arr[i] != '\0'; ++i)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
            arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' ||
            arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' ||
            arr[i] == 'U')
        {
            ++vowels;
        }
        else if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
        {
            ++consonant;
        }
    }
    
        printf("Vowels: %d", vowels);
        printf("\nConsonants: %d", consonant);
}
int main()
{
    char arr[150];

    printf("Enter a line of string: ");
    scanf("%s", arr);

    vowelcheck(arr);

        return 0;
}
