#include <iostream>
using namespace std;

// Perfect Number : Sum of factors = 2 * Number

int main()
{
    int i,n,sum=0;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
    }
    
    if (sum==2*n)
    {
        cout<<"Perfect Number"<<endl;
    }
    else
    {
        cout<<"Not a Perfect Number"<<endl;
    }
}
