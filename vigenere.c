#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Try again.");
        return 1;
    }
    string key = argv[1];
    long SumOfElementsKey = strlen(key);
    for(int index = 0; index < SumOfElementsKey; index++) 
    {
        if (!isalpha(key[index]))
        {
            printf("Try again.");
            return 1;
        }
    }
    printf("enter the text \n");
    string text = GetString();
    if(text == NULL) 
    {
        printf("Try again.");
        return 1;
    }
    for (int i = 0, n = 0; i < strlen(text); i++) 
    {
        if (isalpha(text[i])) 
        {
            if (isupper(text[i]))
               printf("%c", ((((text[i] - 'A') + ((toupper(key[n++ % SumOfElementsKey]))-'A')%26) % 26) + 'A'));
            if (islower(text[i]))
               printf("%c", ((((text[i] - 'a') + ((tolower(key[n++ % SumOfElementsKey]))-'a')%26) % 26) + 'a'));
        } 
        else
        printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}
