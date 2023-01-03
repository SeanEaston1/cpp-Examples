#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    
    if (a>b)
    {
        if (a>c)
        {
            cout<<"Maximum is: "<<a<<endl;
        }
        else
        {
            cout<<"Maximum is: "<<c<<endl;
        }
    }
    else
    {
        if (b>c)
        {
            cout<<"Maximum is: "<<b<<endl;
        }
        else
        {
            cout<<"Maximum is: "<<c<<endl;
        }
    }
    
    return 0;
}
