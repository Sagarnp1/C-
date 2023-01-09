#include <iostream>

using namespace std;

int main() {
  int mark;

  cout << "Enter Your Marks: ";
  cin >> mark;

  if (mark >= 90) {
    cout << "Your Grade is A+" << endl;
  } else if (mark >= 80) {
    cout << "Your Grade is A" << endl;
  } else if (mark >= 70) {
    cout << "Your Grade is B" << endl;
  } else if (mark >= 60) {
    cout << "Your Grade is C" << endl;
  } else {
    cout << "Your Grade is D" << endl;
  }

  return 0;
}
