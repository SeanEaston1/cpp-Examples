#include <iostream>
using namespace std;

int main()
{
    char s1[50];
    char s2[50];
    
    cout<<"Enter your Name: ";
    cin.get(s1, 50);
    cout<<s1<<endl;
    
    cin.ignore();
    
    cout<<"Enter your Name again: ";
    cin.get(s2, 50);
    cout<<s2<<endl;

    // That is why use 'getline' instead of using 'get' function
    
    return 0;
}
