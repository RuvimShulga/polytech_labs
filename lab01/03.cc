#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "rus");
  int a, b, c, d;
  int g, f;
  char dummychar;
  cout << "Введите первую дробь: ";
  cin >> a >> dummychar >> b;
  cout << "Введите вторую дробь: ";
  cin >> c >> dummychar >> d;

  g = a * d + b * c;
  f = b * d;

  cout << "Сумма равна: " << g << "/" << f;

  return 0;
}