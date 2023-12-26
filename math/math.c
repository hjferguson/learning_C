#include <stdio.h>
#include <math.h>

int main(){

    // double A = sqrt(9);
    // double B = pow(2, 4);
    // int C = round(3.14);
    // int D = ceil(3.14); //rounds up
    // int E = floor(3.99);
    // double F = fabs(-100);
    // double G = log(3);
    // double H = sin(45);
    // double I = cos(45);
    // double J = tan(45);

    //printf("\n%d", D);

    // const double PI = 3.14159;
    // double radius;
    // double circumference;
    // double area;

    // printf("\nEnter radius of a circle: ");
    // scanf("%lf", &radius);

    // circumference = 2 * PI * radius;
    // area = PI * radius * radius;

    // printf("circumference: %0.2lf",circumference);
    // printf("Area of circle: %0.2lf", area);

    double A;
    double B;
    double C;

    printf("Enter side A");
    scanf("%lf", &A);

    printf("Enter side B");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);

    return 0;
}