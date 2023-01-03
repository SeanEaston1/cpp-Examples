#include <iostream>
using namespace std;

int main() {
  // Declare an integer variable called 'x' and set it equal to 10
  int x = 10;

  // Declare a pointer to an integer called 'p' and set it equal to the address of 'x'
  int* p = &x;

  // Print the value of 'x' and the address of 'x'
  cout << "x is: " << x << endl;
  cout << "&x is: " << &x << endl;

  // Print the value of 'p' and the value stored at the address pointed to by 'p'
  cout << "p is: " << p << endl;
  cout << "*p is: " << *p << endl;

  return 0;
}
