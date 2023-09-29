#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

struct person {
  char *name;
  float salary;
};

// Функция для ввода данных о сотрудниках
void input(person *p) {
  char tempName[100]; // Временный буфер для имени
  cout << "Введите имя сотрудника: ";
  cin >> tempName;
  p->name = new char[strlen(tempName) + 1];
  strcpy(p->name, tempName);
  cout << "Введите зарплату сотрудника: ";
  cin >> p->salary;
}

// Функция для вывода данных о сотрудниках
void display(const person *p) {
  cout << "Имя: " << p->name << ", Зарплата: " << p->salary << endl;
}

// Функция для сравнения сотрудников по зарплате (для сортировки)
bool compareSalary(const person &p1, const person &p2) {
  return p1.salary < p2.salary;
}

int main() {
  const int numberOfEmployees = 5;
  person *employees = new person[numberOfEmployees];

  for (int i = 0; i < numberOfEmployees; i++) {
    input(&employees[i]);
  }

  cout << "Информация о сотрудниках:" << endl;
  for (int i = 0; i < numberOfEmployees; i++) {
    display(&employees[i]);
  }

  sort(employees, employees + numberOfEmployees, compareSalary);

  cout << "Информация о сотрудниках после сортировки:" << endl;
  for (int i = 0; i < numberOfEmployees; i++) {
    display(&employees[i]);
  }

  for (int i = 0; i < numberOfEmployees; i++) {
    delete[] employees[i].name;
  }
  delete[] employees;

  return 0;
}
