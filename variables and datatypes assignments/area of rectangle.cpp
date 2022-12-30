/* - Write a C++ program to take length and breadth of a rectangle and print its area. (Easy)
Sample Input : 7, 4
Sample Output : 28 */

#include <iostream>
using namespace std;

int main() {
	int length= 7;
	int breadth = 4;
	int area;
	area = length * breadth;
	
	cout<<"The Area of rectangle is:"<<area;
	
	return 0;
}
