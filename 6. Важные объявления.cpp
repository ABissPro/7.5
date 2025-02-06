#include <iostream>

int main()
{
	system("chcp 1251"); // Установить кодировку
	int length;
	int exMark;
	std::cout << "Введите общую длину колонтитула: ";
	std::cin >> length;
	std::cout << "Введите количество восклицательных знаков: ";
	std::cin >> exMark;

	int rSide = (length - exMark) / 2;
	int lSide = length - rSide - (length - exMark)% 2;
	
	for (int col = 1; col <= length; col++) {
		//работает для тех, где нужен сдвиг. Где не нужен сдвиг ! на один меньше 
			if (col <= rSide) {
				std::cout << "~";
			}
			else if (col > lSide) {
				std::cout << "~";
			}
			else {
				std::cout << "!";
			}
		
		
		
	}

}
