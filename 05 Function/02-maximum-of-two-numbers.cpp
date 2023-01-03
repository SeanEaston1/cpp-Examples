#include <iostream>
using namespace std;

int max (int a, int b, int c)
{
    if (a>b && a>c)
        return a;
    else if (b>c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c, d;
    
    cout<<"Enter the value of A: ";
    cin>>a;
    
    cout<<"Enter the value of B: ";
    cin>>b;
    
    cout<<"Enter the value of C: ";
    cin>>c;
    
    d=max(a,b,c);
    cout<<"Maximum of 3 numbers is: "<<d<<endl;
}
