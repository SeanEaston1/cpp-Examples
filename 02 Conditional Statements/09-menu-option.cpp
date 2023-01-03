#include <iostream>
using namespace std;

int main()
{
    cout<<"MENU\n";
    cout<<"1. Add\n"<<"2. Subtract\n"<<"3. Multiply\n"<<"4. Divide\n"<<endl;
    
    int a,b,c;
    cout<<"Enter the numbers: \n";
    cin>>a>>b;
    
    int option;
    cout<<"Select option: \n";
    cin>>option;
    
    switch (option) {
        case 1:
            c=a+b;
            break;
        case 2:
            c=a-b;
            break;
        case 3:
            c=a*b;
            break;
        case 4:
            c=a/b;
            break;
    }
    cout<<"The answer is: "<<c<<endl;
}

