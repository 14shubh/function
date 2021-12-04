// •	Character Is Vowel or Consonant

#include <stdio.h>
char vowelConsonent(char c)
{
    char vowel;
    // evaluates to 1 if variable c is a vowel
    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    return vowel;
}
int main()
{
    char c,vowel;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    vowel=vowelConsonent(c);

    // evaluates to 1 (true) if c is a vowel
    if (vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}