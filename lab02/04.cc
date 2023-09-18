#include <iostream>

int main() {
  double price, start_payment, count_years, term;
  double total_payment = 0;

  std::cout << "Введите стоимость квартиры: ";
  std::cin >> price;
  std::cout << "Введите начальный взнос: ";
  std::cin >> start_payment;
  std::cout << "Введите число лет ипотеки: ";
  std::cin >> count_years;
  std::cout << "Введите процентную ставку: ";
  std::cin >> term;

  term /= 100;
  double one_year_body_payment = (price - start_payment) / count_years;
  double need_to_pay = price - start_payment;

  for (int i = 1; i <= count_years; i++) {
    double year_payment = need_to_pay * term + one_year_body_payment;
    std::cout << "Платеж в " << i << " год: " << year_payment << std::endl;
    total_payment += year_payment;
  }

  std::cout << "Общая сумма выплат: " << total_payment;

  return 0;
}