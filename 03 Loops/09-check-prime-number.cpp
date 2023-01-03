#include <iostream>
using namespace std;

int main()
{
    int n,i,count=0;
    
    cout<<"Enter the number: "<<endl;
    cin>>n;
    
    //A new operator 'count' is used here//
    
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    
    if (count==2)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Non Prime"<<endl;
    }
    
    return 0;
}
