#include <iostream>

int main() {
  // This for loop will execute 5 times.
  // The initialization part of the loop declares a variable called 'i' and sets it equal to 0.
  // The condition part of the loop checks whether 'i' is less than 5.
  // The increment part of the loop increases the value of 'i' by 1 after each iteration.
  for (int i = 0; i < 5; i++) {
    // This line of code will execute 5 times, once for each iteration of the loop
    std::cout << "i is: " << i << std::endl;
  }

  return 0;
  
  // When you know how many times the loop will iterate, use a for loop.
}
