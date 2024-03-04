#include <iostream>
#include <bitset>
#include <Windows.h>

class LogicOperations {
public:
    void task1() {
        bool p, q;
        std::cout << "Введіть p (true/false): ";
        std::cin >> std::boolalpha >> p;
        std::cout << "Введіть q (true/false): ";
        std::cin >> std::boolalpha >> q;

        bool conjunction = p && q; // Кон'юнкція
        bool disjunction = p || q; // Диз'юнкція
        bool exclusiveOr = p ^ q; // Альтернативне "або"
        bool implication = !p || q; // Імплікація
        bool equivalence = p == q; // Еквівалентність

        std::cout << "Кон'юнкція: " << std::boolalpha << conjunction << std::endl;
        std::cout << "Диз'юнкція: " << std::boolalpha << disjunction << std::endl;
        std::cout << "Альтернативне 'або': " << std::boolalpha << exclusiveOr << std::endl;
        std::cout << "Імплікація: " << std::boolalpha << implication << std::endl;
        std::cout << "Еквівалентність: " << std::boolalpha << equivalence << std::endl;
    }

    void task2() {
        std::bitset<8> a(0b11001100); // a = 204, оскільки не входить у діапазон від -128 до 127 то за замовчуванням вважається int
        std::bitset<8> b(0b10101011); // b = 171, оскільки не входить у діапазон від -128 до 127 то за замовчуванням вважається int

        std::bitset<8> result_or = (a | b);
        std::bitset<8> result_and = (a & b);
        std::bitset<8> result_xor = (a ^ b);

        std::cout << "Результат виконання порозрядної операції OR: " << result_or << std::endl;
        std::cout << "Результат виконання порозрядної операції AND: " << result_and << std::endl;
        std::cout << "Результат виконання порозрядної операції XOR: " << result_xor << std::endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    LogicOperations logic;

    std::cout << "Введіть номер завдання (1 або 2): ";
    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        logic.task1();
        break;
    case 2:
        logic.task2();
        break;
    default:
        std::cout << "Ви ввели неправильно!" << std::endl;
    }

    return 0;
}
