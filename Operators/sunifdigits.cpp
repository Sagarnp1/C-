#include <iostream>

int main() {
  int num;
  std::cout << "Enter a 3-digit number: ";
  std::cin >> num;

  int first_digit = num / 100;
  int second_digit = (num / 10) % 10;
  int third_digit = num % 10;
  int sum = first_digit + second_digit + third_digit;
  std::cout << "The sum of the digits is: " << sum << std::endl;

  return 0;
}
