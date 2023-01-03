#include <iostream>
using namespace std;

int main()
{
    int avg,sum=0,n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int A[n];
    
    for (int i=0; i<n; i++)
    {
        cout<<"Enter the numbers: ";
        cin>>A[i];
        sum=sum+A[i];
    }
    
    avg=sum/n;
    cout<<"Average is: "<<avg<<endl;
    
}
