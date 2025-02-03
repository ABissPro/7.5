
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int stock = 100;
    int month; //без инициализации до цикла в финальном выводе была ошибка
    
    for (month = 0; stock != 0; month++) {
        stock = stock - 4; //по условию 4 кг в месяц расход
        std::cout << "После " << month << " месяца у вас останется " << stock << " кг гречки.\n";
    }
    std::cout << "Припасы кончатся через " << month << " месяцев";
}