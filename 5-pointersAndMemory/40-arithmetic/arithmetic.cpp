#include <iostream>

void manipX (double x) {
    x += 20;
    std::cout << x << std::endl;

    x -= x;
    std::cout << x << std::endl;

    x /= 5.5;
    std::cout << x << std::endl;

    x = 15%4;
    std::cout << x << std::endl;

    x = ((100/76) + 7 - (6 * x) / 10);
    std::cout << x << std::endl;

    x = x - 10000;
    std::cout << x << std::endl;
}

int main (void) {
    double x;
    manipX(x);

    return 0;
}

