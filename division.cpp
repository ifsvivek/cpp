#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a, b, r, q;
    cout<<"Enter number: ";
    cin>>a>>b;
    r= remainder (a, b);
        q=a/b;  
    cout<<"Quotient "<<a<<"/"<<b<<" is : "<<q<<endl;
    cout<<"Reminder of "<<a<<"/"<<b<<" is : "<<r;
    
}
