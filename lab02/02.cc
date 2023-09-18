#include <iostream>

int main() {
  int input;
  std::cin >> input;
  while (input != 0) {
    double result = 1;
    for (int i = 1; i <= input; i++) {
      result *= i;
    }
    std::cout << result << std::endl;
    std::cin >> input;
  }
  return 0;
}