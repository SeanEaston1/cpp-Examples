#include <iostream>
using namespace std;

int main()
{
    int n,num,rev=0,r;
    cout<<"Enter a number: ";
    cin>>num;
    
    n=num;
    
    while (n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    
    if (rev==num)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}
