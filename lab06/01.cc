#include <iostream>
using namespace std;

class Double {
public:
  Double() : value(0.0) {}

  Double(double initialValue) : value(initialValue) {}

  void setToZero() { value = 0.0; }

  void initialize(double initialValue) { value = initialValue; }

  void display() const { cout << value; }

  Double add(const Double &other) const {
    Double result(value + other.value);
    return result;
  }
  
  private:
  double value;
};

int main() {
  Double num1;
  Double num2(5.5);
  Double num3(2.0);

  num1 = num3.add(num2);

  std::cout << "Результат сложения: ";
  num1.display();
  std::cout << std::endl;

  return 0;
}