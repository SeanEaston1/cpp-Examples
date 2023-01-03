#include <iostream>
using namespace std;

int main()
{
    
    int sidea,sideb,sidec;
    cout<<"Sides of Triangle=";
    cin>>sidea>>sideb>>sidec;
    
    if (sidea==sideb && sideb==sidec) {
        cout<<"This is an Equilateral Triangle";
    } else if (sidea==sideb||sideb==sidec||sidec==sidea){
        cout<<"This is an Isosceles Triangle";
    } else {
        cout<<"This is a Scalene Triangle";
    }
    
    return 0;
}
