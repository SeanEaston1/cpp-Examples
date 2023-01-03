#include <iostream>
using namespace std;

int main() {
  // Declare and initialize an array
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5; // size of the array

  // The element we want to search for
  int x = 3;

  // Flag to store the search result
  bool found = false;

  // Perform linear search
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      found = true;
      break;
    }
  }

  // Print the result
  if (found) {
    cout << "Element found!" << endl;
  } else {
    cout << "Element not found." << endl;
  }

  return 0;
}
