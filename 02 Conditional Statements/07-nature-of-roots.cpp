#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float d;
    float a,b,c;
    float r1,r2;
    
    cout<<"Enter value of a,b,c: "<<endl;
    cin>>a>>b>>c;
    
    d=(b*b)-(4*a*c);
    
    if (d==0)
    {
        cout<<"Real and Equal roots"<<endl;
    }
    else if (d>0)
    {
        cout<<"Real and Unequal roots"<<endl;
    }
    else
    {
        cout<<"Imaginary roots"<<endl;
    }
    
    r1=(-b+sqrt(d))/2*a;
    cout<<"Root 1 is: "<<r1<<endl;
    
    r2=(-b-sqrt(d))/2*a;
    cout<<"Root 2 is: "<<r2<<endl;
    
    return 0;
}

