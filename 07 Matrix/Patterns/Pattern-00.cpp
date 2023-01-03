// This is the code that will help you understand how the pattern is created

#include <iostream>
using namespace std;

int main()
{
    cout<<"Important Pattern"<<endl;
    
    int count=1;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
}
