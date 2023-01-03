#include <iostream>
using namespace std;

// 'return-type' 'function-name' '(parameter-list)'  

int add(int x, int y)
{
    int z;
    z=x+y;
    return z;
}

int main()
{
    int a, b, c;
    
    cout<<"Value of a is: ";
    cin>>a;
    
    cout<<"Value of b is : ";
    cin>>b;
    
    c=add(a, b);
    cout<<"Value of c is "<<c<<endl;
    
    return 0;
}

