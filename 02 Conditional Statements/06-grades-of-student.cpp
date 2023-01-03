#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    float m1,m2,m3;
    float avg;
    
    cout<<"Marks in 1st: ";
    cin>>m1;
    
    cout<<"Marks in 2nd: ";
    cin>>m2;
    
    cout<<"Marks in 3rd: ";
    cin>>m3;
    
    
    avg=(m1+m2+m3)/3;
    
    if (avg>=60)
    {
        cout<<"A Grade"<<endl;
    }
    else if (avg<60 && avg>35)
    {
        cout<<"B Grade"<<endl;
    }
    else
    {
        cout<<"C Grade"<<endl;
    }
    
    return 0;
}
