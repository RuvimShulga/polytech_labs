#include <iostream>

using namespace std;

int main() {
  setlocale(LC_ALL, "rus");
  double c_degrees;
  double f_degrees;
  cout << "Введите количество градусов по Фаренгейту: ";
  cin >> c_degrees;
  f_degrees = c_degrees * 9 / 5 + 32;
  cout << "Градусов Фаренгейта: " << f_degrees << endl;
  return 0;
}