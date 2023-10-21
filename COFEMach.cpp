#include <iostream>
int wat,milk;
int amer,lat;
int choice;

int main() {

    setlocale(LC_ALL, "Russian");

    std::cout << "Введите количество воды в мл: ";
    std::cin >> wat;
    std::cout << "Введите количество молока в мл: ";
    std::cin >> milk;

    while (true) {
        if (wat < 300 && milk < 270) {
            std::cout << " **************** ОТЧЕТ **************** \n";
            std::cout << " Вода:    " << wat << "\n";
            std::cout << " Молоко:  " << milk << "\n";
            std::cout << " Кружек американо приготовлено:   " << amer << "\n";
            std::cout << " Кружек латте приготовлено:   " << lat << "\n";
            break;
        }
        std::cout << " Выберите напиток (1 — американо, 2 — латте): ";
        std::cin >> choice;
        if (choice == 1) {
            if (wat >= 300) {
                wat -= 300;
                std::cout << "Получите ваш американо\n";
                amer++;
            }
            else {
                std::cout << "Не хватает воды\n";
            }
        }
        else if (choice == 2) {
            if (wat >= 30 && milk >= 270) {
                wat -= 30;
                milk -= 270;
                std::cout << "Получиет ваш латте \n";
                lat++;
            }
            else {
                std::cout << "Не хватает ингридиентов для латте!\n";
            }
        }
        else {
            std::cout << " 1 или 2 ";
        }
    }
}