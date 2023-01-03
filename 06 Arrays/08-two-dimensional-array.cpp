#include <iostream>
using namespace std;

int main()
{
    int A[2][3]={2,23,11,43,53,4};
    
    //Normal Way//
    
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;
    
    //Better Way// 
    
    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    
    
}


