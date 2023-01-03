#include <iostream>
using namespace std;

int main()
{
    int x,y;
    
    cout<<"Enter 2 numbers: "<<endl;
    cin>>x>>y;
    
    if (x>y) {
        cout<<"Maximum is "<<x<<endl;
    } else {
        cout<<"Maximum is "<<y<<endl;
    }
    
    return 0;
}
