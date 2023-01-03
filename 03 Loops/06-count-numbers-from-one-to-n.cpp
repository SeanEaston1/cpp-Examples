#include <iostream>
using namespace std;

int main()
{
    int n, i=1;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    
    //While loop
    while (i<=n) {
        cout<<i<<endl;
        i++;
    }
    
    //For loop
    for (i=1; i<=n; i++) {
        cout<<i<<endl;
    }
    
    return 0;
}
