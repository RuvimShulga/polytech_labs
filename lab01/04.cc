// количество десятичных пенсов уменьшилось на 2.4
// количество фунтов осталось неизменным

#include <cmath>
#include <iostream>
using namespace std;
int main() {
  setlocale(LC_ALL, "rus");

  int f, s, p;
  cout << "Введите количество фунтов: ";
  cin >> f;
  cout << "Введите количество шиллингов: ";
  cin >> s;
  cout << "Введите количество пенсов: ";
  cin >> p;

  double new_p = round((p + (s * 12)) / 2.4);
  cout << "Десятичных фунтов: £";
  cout << f << '.' << new_p;
  return 0;
}