#include <iostream>
#include <string>
using namespace std;

int main() {
  // Declare a string
  string str = "Hello, World!";

  // Print the string
  cout << str << endl;

  // Get the length of the string
  int len = str.length();
  cout << "Length of the string: " << len << endl;

  // Access individual characters of the string
  char first = str[0];
  char last = str[len - 1];
  cout << "First character: " << first << endl;
  cout << "Last character: " << last << endl;

  // Modify individual characters of the string
  str[0] = 'h';
  str[len - 1] = '!';
  cout << "Modified string: " << str << endl;

  // Concatenate two strings
  string str2 = " How are you?";
  str = str + str2;
  cout << "Concatenated string: " << str << endl;

  return 0;
}
