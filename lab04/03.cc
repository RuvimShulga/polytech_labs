#include <iostream>
using namespace std;

void swap(int *first, int *second) {
  int tmp = *first;
  *first = *second;
  *second = tmp;
}

int main() {
  setlocale(LC_ALL, "rus");
  int first, second;
  cout << "Введите первое и второе значение через пробел: ";
  cin >> first >> second;
  swap(&first, &second);
  cout << "Значения поменялись местами: " << first << " " << second << endl;

  return 0;
}