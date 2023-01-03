#include <iostream>
using namespace std;

int main()
{
    
    int a=11, b=7, x, y, z;
    
    x=a&b; //And operator
    
    y=a|b; //OR operator
    
    z=a^b; //X-OR operator
    
    cout<<x<<endl<<y<<endl<<z<<endl;
    
    char p=5, q, r=5, s;
    
    q=p<<1; //Left shift operator
    
    s=r>>1; //Right shift operator
    
    cout<<(int)q<<endl<<(int)s<<endl;
    
    return 0;
}
