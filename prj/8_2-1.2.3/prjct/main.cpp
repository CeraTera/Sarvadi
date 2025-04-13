#include <iostream>
#include "C:\Users\Roman\Desktop\staticlib\staticlib\Header.h";
#include <locale>
#include <iomanip>


    // Функція для логічної перевірки
    bool isEqualSum(int a, int b) {
        return (a + 7 == b);
    }

    // Функція обчислення суми x + y + z
    int s_calculation(int x, int y, int z) {
        return x + y + z;
    }

    int main() {
        setlocale(LC_ALL, "");

        std::cout << "© Сарвадi Роман" << std::endl;

        // Ввід значень a і b
        int a, b;
        std::cout << "Введiть значення для a: ";
        std::cin >> a;
        std::cout << "Введiть значення для b: ";
        std::cin >> b;

        // Вивід логічного результату a + 7 == b
        bool result = isEqualSum(a, b);
        std::cout << "Результат логiчного виразу (a + 7 == b): " << std::boolalpha << result << std::endl;

        // Ввід x, y, z
        int x, y, z;
        std::cout << "\nВведiть значення x: ";
        std::cin >> x;
        std::cout << "Введiть значення y: ";
        std::cin >> y;
        std::cout << "Введiть значення z: ";
        std::cin >> z;

        // Виведення у десятковій системі
        std::cout << "\nДесяткова система:\n";
        std::cout << "x = " << x << ", y = " << y << ", z = " << z << std::endl;

        // Виведення у шістнадцятковій системі
        std::cout << "Шiстнадцяткова система:\n";
        std::cout << "x = 0x" << std::hex << x
            << ", y = 0x" << y
            << ", z = 0x" << z << std::dec << std::endl;

        // Обчислення S = x + y + z
        int S = s_calculation(x, y, z);
        std::cout << "\nЗначення S = " << S << std::endl;

        // Пауза
        std::cout << "\nНатиснiть Enter для завершення...";
        std::cin.ignore();
        std::cin.get();

        return 0;
    }




