// Pattern 1
// * * * * 
// * * * 
// * * 
// * 

#include <iostream>
using namespace std;

int main()
{
    cout<<endl<<"Pattern 1"<<endl;
    
    for (int i=0; i<4; i++)
    {
        for (int j=i; j<4; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
