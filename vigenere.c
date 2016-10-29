#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(int argc, string argv[])
{
    //
    if (argc != 2)
    {
        printf("Try again.");
        return 1;
    }
    string key = argv[1];
    long SumOfElementsKey = strlen(key);
    for(long index = 0; index < SumOfElementsKey; index++) 
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
    for (long index = 0, NumberOfElementKey = 0; index < strlen(text); index++) 
    {
        if (isalpha(text[index])) 
        {
            if (isupper(text[index]))
                printf("%c", ((((text[index] - 'A') + ((toupper(key[NumberOfElementKey++ % SumOfElementsKey]))-'A')%26) % 26) + 'A'));
            else
                printf("%c", ((((text[index] - 'a') + ((tolower(key[NumberOfElementKey++ % SumOfElementsKey]))-'a')%26) % 26) + 'a'));
        } 
        else
           printf("%c", text[index]);
    }
    printf("\n");
    return 0;
}
