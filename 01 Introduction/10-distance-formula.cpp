#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    int v,u,a;
    float s;
    
    cout<<"Initial speed: ";
    cin>>u;
    
    cout<<"Final speed: ";
    cin>>v;
    
    cout<<"Accelaration: ";
    cin>>a;
    
    s=(float)(v*v-u*u)/2*a;
    
    cout<<"Distance: "<<s<<endl;
    
    
    return 0;
}
