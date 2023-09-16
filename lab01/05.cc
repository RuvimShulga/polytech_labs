
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "rus");

  double f;
  cout << "Введите число десятичных фунтов: ";
  cin >> f;

  double integer_part, fraction_part;
  fraction_part = modf(f, &integer_part) * 100;

  double old_pense = fraction_part * 2.4;

  int shilling = old_pense / 12;
  int pense = (int)old_pense % 12;

  cout << "Эквивалентная сумма в старой форме записи: £" << integer_part << "."
       << shilling << "." << pense;
  return 0;
}