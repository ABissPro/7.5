#include <iostream>

int main()
{
	system("chcp 1251"); // Установить кодировку
	int width;
	int height;
	std::cout << "Введите ширину и высоту рамки: ";
	std::cin >> width >> height;

	for (int row = 0; row <= width; row++) {
		for (int col = 0; col <= height; col++) {
			if (row == 0) {
				std::cout << "-";
			}
			else if (row == width) {
				std::cout << "-";
			}
			else if (col == 0) {
				std::cout << "|";
			}
			else if (col == height) {
				std::cout << "|";
			}
			else {
				std::cout << " ";
			}

		}
		std::cout << "\n";
	}

}

