#include <iostream>
using namespace std;

int main()
{
  // Problem
  
    // This will not print the string after the space.
    char s1[20];
    cout<<"Enter your Name_1: ";
    cin>>s1;
    cout<<s1<<endl;
  
  // Solution
  
    // This will print the string even after after the space.
    char s2[50];
    cout<<"Enter your Name: ";
    cin.getline(s2, 50); 
    cout<<s2<<endl;
  
    // or you can use "cin.get(s2,50);" 
    
    return 0;
}
