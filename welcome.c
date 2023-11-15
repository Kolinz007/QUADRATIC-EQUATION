#include <stdio.h>
#include <math.h>

// To calculate Quadratic Equations

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

int main() {

    printf("Hello\n");
    quadraticCalculate();



    return 0;
}
