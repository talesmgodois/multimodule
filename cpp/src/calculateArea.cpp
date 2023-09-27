#include <iostream>
#include <string>
using namespace std;

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
    double r;
    cout << "Welcome to circle calcs\n";
    cout << "What is the radious of the circle you want to calculate?\n";
    cin >> r;

    const double perimeter = circlePerimeter(r);
    const double area = circleArea(r);
    
    PrintOptions prt;
    prt.area = area;
    prt.perimeter = perimeter;
    
    printData(prt);
}

