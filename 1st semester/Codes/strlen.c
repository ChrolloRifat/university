// C program to calculate length of a string
#include <stdio.h>

int main() {
    
    int count=0,i=0;
    char str[50];
    gets(str);
    /**
     * method 1 using while loop
        
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    */
    
    /**
     * Method 2 using for loop 1
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    */
    
    /**
     * Method 3 using for loop and if statement
     */
    for(i=0; i<50;i++)
    {
        if(str[i]=='\0')
        {
            
            break;
        }
        count++;
    }
    
    printf("Your name is %d characters long",count);

    return 0;
}