#include <iostream>
#include "text.h"


void enterText(char *text)
{
    printf("Enter text: \n");
    fgets(text, 99, stdin);
}
void printText(char *text)
{
    printf("%s\n", text);
}

int textLenght(char *text)
{
    int count = 0;
    while(*(text+count))
    {
        count++;
    }
    return count;
}

void clean(void)
{
    while(getchar()!='\n');
}

void lowerCase(char *text)
{
    while (*text)
    {
        if ('A' <= *text && *text <= 'Z')
        {
            *text += ('a' - 'A');
        }
        text++;
    }
}
void upperCase(char *text)
{
    while (*text)
    {
        if ('a' <= *text && *text <= 'z')
        {
            *text -= ('a' - 'A');
        }
        text++;
    }
}