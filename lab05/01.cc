#include <iostream>
using namespace std;

struct fraction {
  double numerator;
  double denominator;
};

int main() {
  int count_of_frac;
  char dummy;
  cout << "Введите количество дробей: ";
  cin >> count_of_frac;
  fraction *fractions = new fraction[count_of_frac];
  cout << "Вводите дроби через пробел в формате a/b c/d..." << endl;
  for (int i = 0; i < count_of_frac; i++) {
    double numerator, denominator;
    cin >> numerator >> dummy >> denominator;
    fractions[i].numerator = numerator;
    fractions[i].denominator = denominator;
  }

  double sum = 0;
  for (int j = 0; j < count_of_frac; j++) {
    sum += fractions[j].numerator / fractions[j].denominator;
  }
  double average = sum / count_of_frac;

  cout << "Среднее значение дробей: " << average;
  delete fractions;
  return 0;
}