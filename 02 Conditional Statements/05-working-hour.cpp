#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    a=9;
    c=18;
    
    cout<<"Enter the hour in 24 hour form: "<<endl;
    cin>>b;
    
    if (a<=b && c>=b) {
        cout<<"Working hour"<<endl;
    } else {
        cout<<"Non working hour"<<endl;
    }
    
    return 0;
}
