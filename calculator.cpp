#include <iostream>


int main() {
    char op;
    double num1;
    double num2;
    double result;


    std::cout << "************* calculator ****************" << '\n';
    

    std::cout << "Enter an operator (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "Invalid option\n";
            break;
    }

    std::cout << "************************************" << '\n';
    std::cout << "Press enter to exit...";
    std::cin.ignore();
    std::cin.get();



    return 0;
}
