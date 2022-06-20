/**
* Programmer: Mahmudul Hasan Rifat       Student ID: 2221397642   Date completed: 12 June 2022
* Faculty:    Dr. Nova Ahmed(NvA)                 Class: CSE115                      Section:2
*/

/* Problem #1
*  Finding the Area of a circle
*/

#include <stdio.h>
#define PI 3.14156
int main()
 {
    double Radius,      /*input value*/
                 Area;        /*output value*/
    printf("Please Enter the radius: \n");
    scanf("%lf",&Radius);
    Area = PI * Radius * Radius;
    printf("The area of the circle is = %f square unit \n",Area);
    return (0);
}


/* Problem #2
*  Finding the Area of a square in cm
*/

#include <stdio.h>
int main()
 {
    double side,     /*input value*/
                 area;     /*output value*/
    printf("Enter the side length of the square: \n");
    scanf("%lf",&side);
    area = side * side;
    printf("The area of a square whose side length is %f cm is %f square cm.\n",side,area);
    return (0);
}


/* Problem #3
*  Calculating sum and product of two integers
*/
#include <stdio.h>
int main()
 {
    int m,        /*first input value*/
          n,        /*second input value*/
         sum,      /*first output value*/
        product;  /*second output value*/

    printf("Please enter the two integers: \n");
    scanf("%d\n%d",&m,&n);
    sum = m + n;
    product = m * n;
    printf("Sum = %d\nProduct = %d\n",sum,product);
    return (0);
}



/* Problem #4
*  Calculating the difference, quotient and average up to 3 decimal points
*/
#include <stdio.h>
int main()
 {
    float a,        /*first input value*/
              b,        /*second input value*/
              dif,      /*first output value*/
              quo,      /*second output value*/
              avg;      /*Third output value*/

    printf("The Large number: \n");
    scanf("%f",&a);
    printf("The small number: \n");
    scanf("%f",&b);
    dif = a - b;
    quo = a / b;
    avg = (a + b) / 2.0;
    printf("Difference = %.3f\nQuotient = %.3f\nAverage = %.3f\n",dif,quo,avg);
    return (0);
}


/* Problem #5
*  Distributing pieces of candy to children equally and counting the left overs
*/
#include <stdio.h>
int main()
 {
    int c,      /*first input value*/
          p,      /*second input value*/
          div,    /*first output value*/
          rem;    /*second output value*/

    printf("Number of children: \n");
    scanf("%d",&c);
    printf("Total pieces of candy: \n");
    scanf("%d",&p);
    div = p / c;  /*distributing the pieces of candy to children*/
    rem = p % c;  /*finding out the left over pieces of candy*/
    printf("Each child gets %d pieces and %d pieces are left over.\n",div,rem);
    return (0);
}



/* Problem #6
*  Printing the first 3 letters of the user's name and their age
*/
#include <stdio.h>
int main()
 {
    char alp1,       /*first input value*/
             alp2,       /*second input value*/
             alp3;       /*third input value*/
    int  age;        /*fourth input value*/

    printf("Enter the first 3 letters of your name: \n");
    scanf("%c%c%c",&alp1,&alp2,&alp3);
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("Your name is %c%c%c\nYou are %d years old\n",alp1,alp2,alp3,age);
    return (0);
}



/* Problem #7
*  Finding the circumference of a circle
*/
#include <stdio.h>
#define PI 3.14159
int main()
 {
    float rad,       /*input value*/
             circ;      /*output value*/

    printf("Enter the radius of the circle:\n");
    scanf("%f",&rad);
    circ = 2.0 * PI * rad;
    printf("The circumference is %f\n",circ);
    return (0);
}



/* Problem #8
*  Finding the the area of a triangle
*/
#include <stdio.h>
int main()
 {
    float base,       /*first input value*/
              height,     /*second input value*/
              area;       /*output value*/
    printf("Enter the base of the triangle:\n");
    scanf("%f",&base);
    printf("Enter the height of the triangle:\n");
    scanf("%f",&height);
    area = 0.5 * base * height;
    printf("The area of the triangle is %f\n",area);
    return (0);
}



/* Problem #9
*  Converting temperature from celsius to fahrenheit
*/
#include <stdio.h>
int main()
 {
    float cel,     /*input value*/
            fah;     /*output value*/

    printf("Enter celsius temperature:\n");
    scanf("%f",&cel);
    fah = cel * (9.0/5.0) + 32.0; /*converts the temperature to fahrenheit*/
    printf("The temperature is %f degree fahrenheit\n",fah);
    return (0);
}


/* Problem #10
*  swapping two integer values
*/
#include <stdio.h>
int main()
 {
    int a,     /*first input value*/
         b,     /*second input value*/
         temp;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    temp = a; /*stores the value of a*/
    a = b;    /*initial value of a is destroyed and a stores the value of b now*/
    b = temp; /*b gets the initial value of a*/
    printf("a = %d\nb = %d",a,b);
    return (0);
}

