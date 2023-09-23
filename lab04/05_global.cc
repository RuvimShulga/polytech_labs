#include <iomanip>
#include <iostream>
using namespace std;

int counter{0};

void example() {
  counter++;
  cout << counter << endl;
}

int main() {
  setlocale(LC_ALL, "rus");
  int how_much;
  cout << "Сколько раз вызвать функцию?" << endl;
  cin >> how_much;
  for (int i = 0; i < how_much; i++) {
    example();
  }
  return 0;
}