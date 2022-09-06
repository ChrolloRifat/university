#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int freq[26];
    gets(str);

    int line = 1;
    int pos = 0;
    int stop = 0;
    int n = strlen(str);

    for(int i = pos; i<=n; i++)
    {
        for(int i = 0; i<26; i++)
        {
            freq[i] = 0;
        }
        if(str[i] == '.')
        {
          printf("\n");
            printf("Line: %d", line);
            line++;
            stop = i;
            for(int i = pos; i<=stop; i++)
            {
                if(tolower(str[i])>= 'a' && tolower(str[i])<= 'z')
                {
                    freq[tolower(str[i])-'a']++;
                }
            }
            printf("\n");
            for(int i = 0; i<26; i++)
            {
                if(freq[i] != 0)
                {
                    printf("%c = %d ",i+97,freq[i]);
                }
            }
            printf("\n");
            pos = stop + 1;
        }
    }

    return 0;
}