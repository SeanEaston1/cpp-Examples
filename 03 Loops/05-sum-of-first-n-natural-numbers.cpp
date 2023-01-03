#include <iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Enter the value of n: \n";
    cin>>n;
    
    for (i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<"sum is: "<<sum<<endl;
    return 0;
}
