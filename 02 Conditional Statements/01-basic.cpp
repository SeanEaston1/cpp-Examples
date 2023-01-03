#include <iostream>

int main() {
  // Declare a variable called 'x' and set it equal to 5
  int x = 5;

  // This if statement will only execute the code inside the curly braces
  // if the condition inside the parentheses is true.
  // In this case, the condition is 'x > 0', which is true because x is 5.
  if (x > 0) {
    // This line of code will execute because the condition is true
    std::cout << "x is positive!" << std::endl;
  }

  return 0;
}
