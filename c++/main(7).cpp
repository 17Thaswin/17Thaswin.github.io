#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int  a,l,b;
    float r,c;
    cin>>a>>l>>b>>r;
    cout<<pow(a,2)<<"\n";
    cout<<l*b<<"\n";
    c=3.14*r*r;
    cout<<fixed<<setprecision(2)<<c;
}