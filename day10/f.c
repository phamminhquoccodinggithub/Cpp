#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    char str[] = "Hello all";
    int i = 0;
    fp = fopen("text", "r+");
    if (fp == NULL)
    {
        printf("file not opened\n");
        exit(0);
    }
    // the end of file is characterised by EOF character
    while (str[i] != '\0')
    {
        fputc(str[i], fp);
        i++;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}