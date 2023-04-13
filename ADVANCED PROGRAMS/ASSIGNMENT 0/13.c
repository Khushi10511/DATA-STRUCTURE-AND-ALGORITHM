// 13. WAP to replace all vowels from a string with its immediate consonant.
#include <stdio.h>
#include <conio.h>
int main()
{
    char str[50], s[50];
    int i;
    printf("Enter any string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            s[i] = str[i + 1];
        }
        else
            s[i] = str[i];
    }
    printf("\nNew String (after replacing vowel )= %s", s);
    getch();
    return 0;
}