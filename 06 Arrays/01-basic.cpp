#include <iostream>
using namespace std;

int main() {
  // Declare an array of size 5
  int arr[5];

  // Initialize the array using a for loop
  for (int i = 0; i < 5; i++) {
    arr[i] = i;
  }

  // Print the values of the array
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
