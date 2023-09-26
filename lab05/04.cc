#include <cstring>
#include <iostream>

struct Employee {
  char name[100]; // Максимальная длина имени служащего
  long number;

  // Функция для получения данных от пользователя
  void getdata() {
    std::cout << "Введите имя служащего: ";
    std::cin.getline(name, sizeof(name));

    std::cout << "Введите номер служащего: ";
    std::cin >> number;
    std::cin.ignore(); // Игнорируем символ новой строки после ввода номера
  }

  // Функция для вывода данных служащего
  void putdata() {
    std::cout << "Имя: " << name << std::endl;
    std::cout << "Номер: " << number << std::endl;
  }
};

int main() {
  int numEmployees;
  std::cout << "Введите количество сотрудников: ";
  std::cin >> numEmployees;
  std::cin.ignore();

  Employee employees[numEmployees];

  // Получение данных от пользователя для каждого служащего
  for (int i = 0; i < numEmployees; ++i) {
    std::cout << "Введите данные для служащего #" << i + 1 << ":" << std::endl;
    employees[i].getdata();
    std::cout << std::endl;
  }

  // Вывод данных всех служащих
  std::cout << "Данные всех служащих:" << std::endl;
  for (int i = 0; i < numEmployees; ++i) {
    employees[i].putdata();
    std::cout << std::endl;
  }

  return 0;
}
