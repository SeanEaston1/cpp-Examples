#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float bs,ns;
    float pa, pd;
    
    cout<<"What is the basic salary: "<<endl;
    cin>>bs;
    
    cout<<"What is the Percentage of Allowances: "<<endl;
    cin>>pa;
    
    cout<<"What is the Percentage of Deduction: "<<endl;
    cin>>pd;
    
    ns=bs+((bs*pa/100)-(bs*pd/100));
    
    cout<<"Net Salary is: "<<ns<<endl;
    
    return 0;
}
