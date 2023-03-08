#include <iostream>

int main() {
    int a = 5;
    int b = 7;
    int c = 11;
    int largest = a;
    if (b > largest)
        largest = b;
    if (c > largest)
        largest = c;
    std::cout << largest;
    return 0;
}