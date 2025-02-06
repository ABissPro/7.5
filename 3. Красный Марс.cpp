
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    std::string direction;
    int width = 1;
    int length = 1;

    while (true) {
        std::cout << "Текущая позиция марсохода: " << width << "; " << length << ". Введите направление: ";
        std::cin >> direction;

        if (width > 0 && width < 15 && length > 0 && length < 20) {
           
            if (direction == "a") {
                width--;
            } 
            else if (direction == "w") {
                length++;
            } 
            else if (direction == "d") {
                width++;
            } 
            else if (direction == "s") {
                length--;
            } 
            else {
                std::cout << "Ошибка! Введите правильное направление (a - лево, s - назад, w - вперед, d - право)\n";
            }
        }
        else  {
            std::cout << "Марсоход упёрся в стену! Сделайте шаг в другую сторону!\n";

            if (width == 0) {
                width = 1;
            }
            else if (width == 15) {
                width = 14;
            }
            if (length == 0) {
                length = 1;
            }
            else if (length == 20) {
                length = 19;
            }

        }
    }
}
