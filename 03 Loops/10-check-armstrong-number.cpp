#include <iostream>
using namespace std;

int main()
{
    int m,r,sum=0,n;
    cout<<"Enter the number: ";
    cin>>n;
    m=n;
    
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    
    if (sum==m)
    {
        cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong number"<<endl;
    }
    
    return 0;
}
