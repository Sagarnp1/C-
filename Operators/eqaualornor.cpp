//equal or not//
#include <iostream>

int main() {
  int num1, num2;
  std::cout << "Enter two numbers: ";
  std::cin >> num1 >> num2;

  bool are_equal = (num1 == num2);
  std::cout << "The numbers are " << (are_equal ? "" : "not ") << "equal" << std::endl;

  return 0;
}
