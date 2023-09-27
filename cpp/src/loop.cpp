// g++ src/loop.cpp -o outputs/loop.o && outputs/loop.o
#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 0;
    while( i < 20) {
        cout << ("Index is: " + to_string(i) + "\n");
        i++;
    }
    return 0;
}