#include <iostream>
using namespace std;

int main()
{
    
    char x=127;
    x++;
    cout<<(int)x<<endl;
    
    char y=130;
    y++;
    cout<<(int)y<<endl;
    
    char z=-128;
    z--;
    cout<<(int)z<<endl;
    
    int a=INT_MAX;
    a++;
    cout<<(int)a<<endl;
    
    return 0;
}
