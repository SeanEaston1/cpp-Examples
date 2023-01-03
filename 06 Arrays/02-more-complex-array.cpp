#include <iostream>
using namespace std;

int main()
{
  
    // Basic array with int data types
    int a[5]={2,3,1,4,2};
    
    for (int i=0; i<5; i++)
    {
        cout<<a[i]<<endl;
    }
    
    // Array using for-each loop
    int b[6]={2,3,7,8,9,5};
    
    for(int x:b)
        cout<<x<<endl;
    
    // For Float and Int comination type we will use 'auto'
    float c[]={2.5f,3.5f,4.6f,8,9};
    
    for(auto y:c)
        cout<<y<<endl;
    
    return 0;
}
