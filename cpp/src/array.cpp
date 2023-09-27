// g++ src/array.cpp -o outputs/array.o && outputs/array.o
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i [5] =  {1,2,3, 10,2};
    while( i < 20) {
        cout << ("Index is: " + to_string(i) + "\n");
        i++;
    }
    return 0;
}