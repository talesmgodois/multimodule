#include <iostream>

const double PI = 3.141;

double circleArea(double r) {
    return PI * r * r;
}

double circlePerimeter(double r) {
    return 2 * PI * r;
}

struct PrintOptions{
    double area;
    double perimeter;
};

void printData(PrintOptions s) {
    printf("Area %f m2\n", s.area);
    printf("Perimeter %fm\n", s.perimeter);
}

int main() {
    // std:cout   standard character ouput
    const int r = 12;
    const double rD = double(r);
    const double perimeter = circlePerimeter(rD);
    const double area = circleArea(rD);
    
    PrintOptions prt;
    prt.area = area;
    prt.perimeter = perimeter;
    
    printData(prt);
}

