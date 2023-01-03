#include <iostream>
using namespace std;

int main()
{
    int  a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
    
    //Checking the Matrix//
    
    cout<<"Enter the Number of Rows for First Matrix: ";
    cin>>r1;
    cout<<"Enter the Number of Columns for First Matrix: ";
    cin>>c1;
    
    cout<<"Enter the Number of Rows for Second Matrix: ";
    cin>>r2;
    cout<<"Enter the Number of Rows for Second Matrix: ";
    cin>>c2;
    
    while (r2!=c1)
    {
        cout<<"||Error in Matrix||"<<endl;
        
        cout<<"Enter the Number of Rows for First Matrix: ";
        cin>>r1;
        cout<<"Enter the Number of Columns for First Matrix: ";
        cin>>c1;
        
        cout<<"Enter the Number of Rows for Second Matrix: ";
        cin>>r2;
        cout<<"Enter the Number of Rows for Second Matrix: ";
        cin>>c2;
    }
    
    //Getting the elements of First Matrix//
    
    cout<<"Enter the element of Matrix 1: "<<endl;
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c1; j++)
        {
            cout<<"Enter the element a"<<i+1<<j+1<<": ";
            cin>>a[i][j];
        }
    }
    
    //Getting the elements of Second Matrix//
    
    cout<<"Enter the element of Matrix 2: "<<endl;
    for (i=0; i<r2; i++)
    {
        for (j=0; j<c2; j++)
        {
            cout<<"Enter the element b"<<i+1<<j+1<<": ";
            cin>>b[i][j];
        }
    }
    
    //Multipilication of the matrix//
    
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            c[i][j]=0;
            for (k=0; k<c1; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    
    cout<<"Multiplication is: "<<endl;
    for (i=0; i<r1; i++)
    {
        for (j=0; j<c2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }


}
