#include <iostream>
using namespace std;

int main()
{
    int A[5]={2,1,44,5,3};
    int i,sum=0;
    
    for (i=0; i<5; i++)
    {
        sum=sum+A[i];
    }
    
    cout<<"Sum is: "<<sum<<endl;
    
    return 0;
}
