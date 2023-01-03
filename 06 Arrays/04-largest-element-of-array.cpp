#include <iostream>
using namespace std;

int main()
{
    int A[5]={2,3,41,1,66};
    int i,max=A[0];
    
    for (i=0; i<5; i++)
    {
        if (A[i]>max)
        {
            max=A[i];
        }
    }
    
    cout<<"Largest element is "<<max<<endl;
    
    return 0;
}
