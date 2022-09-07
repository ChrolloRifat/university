#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    int freq[26];
    gets(str);

    int line = 1;
    int start = 0;
    int end = 0;
    int n = strlen(str);

    for (int i = start; i <= n; i++)
    {
        for (int i = 0; i < 26; i++)
        {
            freq[i] = 0;
        }
        if (str[i] == '.')
        {

            printf("\nLine: %d", line);
            line = line + 1;
            end = i;
            for (int i = start; i <= end; i++)
            {
                if (tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
                {
                    freq[tolower(str[i]) - 'a']++;
                }
            }
            printf("\n");
            for (int i = 0; i < 26; i++)
            {
                if (freq[i] != 0)
                {
                    printf("%c = %d ", i + 97, freq[i]);
                }
            }
            printf("\n");
            start = end + 1;
        }
    }

    return 0;
}