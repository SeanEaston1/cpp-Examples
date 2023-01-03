// Pattern 2
// * 
// * * 
// * * * 
// * * * * 

#include <iostream>
using namespace std;

int main()
{
    cout<<endl<<"Pattern 2"<<endl;
    
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<=i; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
