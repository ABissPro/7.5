#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int water;
    int milk;
    std::cout << "Введите количество молока (мл): ";
    std::cin >> milk;
    std::cout << "Введите количество воды (мл): ";
    std::cin >> water;
    int latte = 0;
    int americano = 0;
   
    while ((milk >= 270 && water >= 30) || water >= 300) {
        std::cout << "Добро пожаловать!\n";
        int choice;
        std::cout << "Выберите напиток (1 — американо, 2 — латте): ";
        std::cin >> choice;

        if (choice == 1) {
            if (water >= 300) {
                std::cout << "Ваш напиток готов!\n";
                water = water - 300;
                ++americano;
            }
            else {
                std::cout << "Не хватает воды\n";
            }
        }
        else if (choice == 2) {
            if (milk >= 270 && water >= 30) {
                std::cout << "Ваш напиток готов!\n";
                milk = milk - 270;
                water = water - 30;
                ++latte;
            }
            else if (milk < 270) {
                std::cout << "Не хватает молока\n";
            }
            else if (water < 30) {
                std::cout << "Не хватает воды\n";
            }

        }
        else {
            std::cout << "Ошибка!!";
        }

    }

    std::cout << "***Отчёт***\nИнгредиентов осталось:\n     Вода: "
        << water << " мл\n     Молоко: "
        << milk << " мл\nКружек американо приготовлено: " << americano << "\n"
        << "Кружек латте приготовлено: " << latte;
       
}
