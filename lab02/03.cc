#include <iostream>

int main() {
  double start_sum, count_years, term;
  std::cout << "Введите начальный вклад: ";
  std::cin >> start_sum;
  std::cout << "Введите число лет: ";
  std::cin >> count_years;
  std::cout << "Введите процентную ставку: ";
  std::cin >> term;

  term /= 100;
  double total_sum = start_sum;

  for (int i = 1; i <= count_years; i++) {
    total_sum += total_sum * term;
    std::cout << "В конце " << i << "-го года вы получите " << total_sum
              << std::endl;
  }

  std::cout << "Через " << count_years << " лет вы получите " << total_sum;
  return 0;
}