#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10000];
    int i, len;
    int freq[26];
    FILE *file;
    char path[100];

    char ch;
    int characters, words, lines;

    /* Input path of files to merge to third file */
    // printf("Enter source file path: ");
    // scanf("%s", path);

    /* Open source files in 'r' mode */
    file = fopen("lab.txt", "r");

    /* Check if file opened successfully */
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    /*
     * Logic to count characters, words and lines.
     */
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        for (i = 0; i < 26; i++)
        {
            freq[i] = 0;
        }

        /* If the current character is lowercase alphabet */
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 97]++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            freq[ch - 65]++;
        }

        /* Check new line */
        if (ch == '\n' || ch == '\0')
        {
            lines++;
            printf("line %d\n", lines);
            for (i = 0; i < 26; i++)
            {
                /* If current character exists in given string */
                if (freq[i] != 0)
                {
                    printf("'%c' = %d\n", (i + 97), freq[i]);
                }
            }
        }

        /* Check words */
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
        {
            words++;
            printf("words: %d\n", words);
        }
    }

    /* Increment words and lines for last word */
    if (characters > 0)
    {
        words++;
        lines++;
    }

    /* Print file statistics */
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);

    /* Close files  */
    fclose(file);

    return 0;
}
