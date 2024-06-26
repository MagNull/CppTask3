#include <iostream>
#include "ex1.h"
#include "ex2.h"

int main()
{
    // Задание 1
    char arr[12];
    std::cout << "Wait 12 chars: ";
    for (int i = 0; i < 12; ++i)
    {
        std::cin >> arr[i];
    }
    replaceDigitsWithExclamation(arr, 12);
    std::cout << "Result': ";
    for (int i = 0; i < 12; ++i)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;

    // Задание 2
    char str[100];
    std::cout << "Wait string: ";
    std::cin.ignore();
    std::cin.getline(str, 100);
    int length = 0;
    while (str[length] != '\0')
    {
        ++length;
    }
    replaceFirstAndLastChar(str, length);
    std::cout << "Result: " << str << std::endl;
    std::cin.get();
    return 0;
}
