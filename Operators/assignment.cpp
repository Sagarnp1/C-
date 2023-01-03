//Write a program to calculate the sum of the first and the second last digit of a 5 digit number//
#include <iostream>

int main() {
  int num;
  std::cout << "Enter a 5-digit number: ";
  std::cin >> num;

  int first_digit = num / 10000;
  int second_last_digit = (num / 10) % 10;
  int sum = first_digit + second_last_digit;
  std::cout << "The sum of the first and second-to-last digits is: " << sum << std::endl;

  return 0;
}
