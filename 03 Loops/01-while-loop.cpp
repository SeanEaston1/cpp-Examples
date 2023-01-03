#include <iostream>

int main() {
  // Declare a variable called 'count' and set it equal to 0
  int count = 0;

  // This while loop will continue to execute as long as the condition
  // inside the parentheses is true. In this case, the condition is 'count < 5',
  // which means the loop will execute 5 times.
  while (count < 5) {
    // This line of code will execute 5 times, once for each iteration of the loop
    std::cout << "Count is: " << count << std::endl;

    // Increment the value of 'count' by 1 at the end of each iteration
    count++;
  }

  return 0;
  
  //   NOTE : When you don't know how many times the loop will iterate, use a while loop. 
}
