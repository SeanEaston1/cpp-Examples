// Pattern 4
// *   
// **  
// *** 
// ****

#include <iostream>
using namespace std;

int main()
{
    cout<<endl<<"Pattern 4"<<endl;
    
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (i>=j)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
