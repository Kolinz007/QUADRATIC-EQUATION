#include <iostream>
#include <math.h>

using namespace std;

void simultaneousCalculate() {
    int a, b, c, d, e, f;

    printf("ENTER THE NUMBER FOR THE EQN 1 IN THE FORM ax + by = c");

    printf("\nENTER A NUMBER FOR a: ");
    scanf("%d", &a);

    printf("\nENTER A NUMBER FOR b: ");
    scanf("%d", &b);

    printf("\nENTER A NUMBER FOR c: ");
    scanf("%d", &c);

    // This is for the second equation
    printf("\nENTER THE NUMBER FOR THE EQN 2 IN THE FORM ax + by = c");

    printf("\nENTER A NUMBER FOR a: ");
    scanf("%d", &d);

    printf("\nENTER A NUMBER FOR b: ");
    scanf("%d", &e);

    printf("\nENTER A NUMBER FOR c: ");
    scanf("%d", &f);


    int eqn1[] = {a, b, c};
    int eqn2[] = {d, e, f};

    int eqn3[] = {(eqn1[0] * d), (eqn1[1] * d), (eqn1[2] * d)};

    int eqn4[] = {(eqn2[0] * a), (eqn2[1] * a), (eqn2[2] * a)};



    double eqn5[] = {(eqn4[0] - eqn3[0]), (eqn4[1] - eqn3[1]), (eqn4[2] - eqn3[2])};


    //printf("Y = %d / %d", eqn5[2], eqn5[1]);

    double y = eqn5[2]/eqn5[1];

    double eqn6[] = {(eqn1[0]),(eqn1[1] * y),(eqn1[2])};

    double x = {(eqn6[2] - eqn6[1] ) / eqn6[0] };

    printf("X = %.3lf  Y = %.3lf", x,y);
}

void quadraticCalculate() {
    int a, b, c;

    printf("Enter a number for a using the form ax^2+bx+c: ");
    scanf("%d", &a);

    printf("Enter a number for b using the form ax^2+bx+c: ");
    scanf("%d", &b);

    printf("Enter a number for c using the form ax^2+bx+c: ");
    scanf("%d", &c);

    int result1 = ((b*b) - (4 * (a *c) ) );

    float result2 = sqrt(result1);

    double result3 = (-b + result2) / (2 * a);
    double result4 = (-b - result2) / (2 * a);

    if (a = 1)

    {
        printf("The roots of the equation\n     x^2 + %dx + %d is\n X = %.3lf or X = %.3lf", b, c, result3, result4);
    }
    else if (result1 <= 0)
    {
        printf("Math ERROR..");
    }
    else if (b = 1)
    {
        printf("The roots of the equation\n     %dx^2 + x + %d is\n X = %.3lf or X = %.3lf", a, c, result3, result4);
    }
    else if (b < 0)
    {
        printf("The roots of the equation\n     %dx^2 - %dx + %d is\n X = %.3lf or X = %.3lf", a, b, c, result3, result4);
    }
    else if (c < 0)
    {
        printf("The roots of the equation\n     %dx^2 + %dx - %d is\n X = %.3lf or X = %.3lf", a, b, c, result3, result4);
    }
    else
    {
        quadraticCalculate;
    }


}

int main()
{
    int number;

    printf("\n1. Simultaneous Equation");
    printf("\n2. Quadratic Equation\n");
    printf("Enter a number for the Equation you want to calculate: ");

    scanf("%d", &number);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    //(number = 1) ? simultaneousCalculate() : quadraticCalculate();

    switch (number) {
case 1:
    simultaneousCalculate();
    break;

case 2:
    printf("You have chosen the number, 2 \n");
    quadraticCalculate();
    break;

default:
    printf("You entered a wrong number");
    break;

    }

    return 0;
}
