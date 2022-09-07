 
#include<stdio.h>
#include<string.h>

int main()
{
    char c[99999];
    int a[127]={0};
    gets(c);
    int i,j,k,l,m, cse = 0, sentence = 0;


    for(i = 0; c[i]!='\0'; i++)
    {
        if(c[i]==46)
        {
            cse = cse + 1;
        }
    }

    for(i = 0; i<=cse-1; i++)
    {
            if(i!=cse-1)
            {
                for(j = sentence; c[j]!='.'; j++)
                {
                    a[c[j]]++;
                }
            printf("\nnumber %d sentence has\n\n",i+1);
                for(k = 0; k<127; k++)
                {
                    if(a[k]>0)
                    {

                        printf("%c -- %d times\n", k, a[k]);
                    }
                }
            }
            else
            {
                for(j = sentence; c[j]!='\0'; j++)
                {
                    a[c[j]]++;
                }
             printf("\nnumber %d sentence has\n\n",i+1);
                for(k = 0; k<127; k++)
                {
                    if(a[k]>0)
                    {

                        printf("%c -- %d times\n", k, a[k]);
                    }
                }
            }

            for(l = sentence; c[l]!='.'; l++);
            sentence = l+1;

            for(m = 0; m<127; m++)
            {
                a[m] = 0;
            }



    }






}
