#include <iostream>
using namespace std;

int main()
{
    
    char c;
    cout<<"Enter an alphabet:";
    cin>>c;
    
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
        cout<<"This is a Vowel";
    } else{
        cout<<"This is a Consonant";
    }
    
    return 0;
}


