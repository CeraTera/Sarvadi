#include <iostream>
#include <cmath> // sin, sqrt, pow, fabs

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double x, y, z;

    std::cout << "Введіть значення x: ";
    std::cin >> x;
    std::cout << "Введіть значення y: ";
    std::cin >> y;
    std::cout << "Введіть значення z: ";
    std::cin >> z;

    if (x < 0) {
        std::cerr << "Помилка: x має бути >= 0 для sqrt(x)\n";
        return 1;
    }

    double innerSinArg = std::abs(y - z * z); // |y - z^2|
    double sinPart = std::sin(innerSinArg);   // sin(|y - z^2|)
    double sqrtX = std::sqrt(x);              // sqrt(x)

    double rootInner = std::pow(y * z, x) + y / (2 * M_PI);
    if (rootInner < 0) {
        std::cerr << "Помилка: підкореневий вираз менший за 0\n";
        return 1;
    }

    double sqrtPart = std::sqrt(rootInner);   // sqrt((yz)^x + y / 2pi)

    double S = std::abs(sinPart + sqrtX - sqrtPart); // Зовнішній модуль

    std::cout << "Значення S: " << S << std::endl;

    return 0;
}
