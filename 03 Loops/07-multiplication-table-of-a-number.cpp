#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the number: \n";
    cin>>n;
    
    for (i=1; i<=10; i++)
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
