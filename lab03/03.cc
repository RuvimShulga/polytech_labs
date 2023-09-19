#include <iostream>
using namespace std;

struct fraction {
  int numerator;
  int denominator;
};

int main() {
  fraction fraction1, fraction2, result_fraction;
  char dummychar;
  cout << "Введите первую дробь: ";
  cin >> fraction1.numerator >> dummychar >> fraction1.denominator;
  cout << "Введите вторую дробь: ";
  cin >> fraction2.numerator >> dummychar >> fraction2.denominator;

  result_fraction.numerator = fraction1.numerator * fraction2.denominator +
                              fraction1.denominator * fraction2.numerator;
  result_fraction.denominator = fraction1.denominator * fraction2.denominator;

  cout << result_fraction.numerator << "/" << result_fraction.denominator
       << endl;
  return 0;
}