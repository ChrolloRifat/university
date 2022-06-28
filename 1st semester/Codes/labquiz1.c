#include <stdio.h>
char generateGrade(float,float,float,float);
int main()
{
    float q,m,f,a;
    char grade;
    scanf("%f%f%f%f",&q,&m,&f,&a);          //takes input of quiz, midterm, final and assigments marks
    grade = generateGrade(q,m,f,a);
    printf("Your grade is %c\n",grade);

}
char generateGrade(float quiz, float mid, float fin, float assign)
{
    char gra;
    float sum = (0.2 * quiz) + (0.3 * mid) + (0.4 * fin) + (0.1 * assign);
    if(sum >= 90)
    {
        gra = 'A';
    }
    else if(sum >= 80 && sum < 90)
    {
        gra = 'B';
    }
    else if(sum >= 70 && sum < 80)
    {
        gra = 'C';
    }
    else if(sum >= 60 && sum < 70)
    {
        gra = 'D';
    }
    else
    {
        gra = 'F';
    }
    return gra;
}
