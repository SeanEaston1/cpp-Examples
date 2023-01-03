#include <iostream>
using namespace std;

int main() {
  // Declare a variable called 'input' and set it equal to 0
  int input = 0;

  // This do-while loop will execute at least once, and then will continue
  // to execute as long as the condition inside the parentheses is true.
  do {
    // This line of code will execute at least once
    cout << "Enter a number (0 to exit): ";
    cin >> input;

    // This line of code will execute as long as 'input' is not equal to 0
    cout << "You entered: " << input << std::endl;
  } while (input != 0);

  return 0;
  
  // Unlike a regular while loop, a do-while loop is guaranteed to execute at least once.
  // Because the condition is checked at the end of each iteration rather than at the beginning
}
