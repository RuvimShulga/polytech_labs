#include <iostream>

int main() {
  char mode;
  do {
    int f1, f2, s1, s2, p1, p2;
    char dummychar;
    int total_f = 0, total_s = 0, total_p = 0;
    std::cout << "Введите первую сумму £";
    std::cin >> f1 >> s1 >> p1;
    std::cout << "Введите вторую сумму £";
    std::cin >> f2 >> s2 >> p2;

    total_p = p1 + p2;
    if (total_p > 11) {
      s1 += total_p / 12;
      total_p %= 12;
    }

    total_s = s1 + s2;
    if (total_s > 19) {
      f1 += total_s / 20;
      total_s %= 20;
    }

    total_f = f1 + f2;

    std::cout << "Всего £" << total_f << " " << total_s << " " << total_p
              << std::endl;

    std::cout << "Продолжить (y/n)? ";

    std::cin >> mode;
  } while (mode != 'n');

  return 0;
}