#include <iostream>

int main() {
  int symbol_in_row = 2 * 20 + 1;
  for (int i = 1; i <= 20; i++) {
    for (int j = 1; j <= symbol_in_row; j++) {
      int row_center = symbol_in_row / 2 + 1;
      if (j > row_center - i && j < row_center + i) {
        std::cout << "x";
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
  return 0;
}