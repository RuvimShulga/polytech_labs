#include <iostream>
#include <string>

using namespace std;

void reversit(string &str) {
  int length = str.length();
  for (int i = 0; i < length / 2; ++i) {
    char tmp = str[i];
    str[i] = str[length - i - 1];
    str[length - i - 1] = tmp;
    // swap(str[i], str[length - i - 1]);
  }
}

int main() {
  string inputString;
  setlocale(LC_ALL, "rus");

  cout << "Введите строку: ";
  getline(cin, inputString);

  // Вызываем функцию reversit() для переворачивания строки
  reversit(inputString);

  // Выводим результат
  cout << "Перевернутая строка: " << inputString << endl;

  return 0;
}