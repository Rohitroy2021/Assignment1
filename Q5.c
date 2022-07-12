//WAP to calculate the length of String using printf function.
#include <stdio.h>

int main()
{
    char s[100];
    int length;

    printf("Enter any string: ");
    gets(s);
    length=strlen(s);
    printf("Length of string is %c",length);

    return 0;
}
