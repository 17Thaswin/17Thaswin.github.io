#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    
    cin>>a>>b>>c;
    d=a+b;
    e=((d*c)/100);
    f=d-e;
    cout<<fixed<<setprecision(2)<<d<<"\n";
    cout<<fixed<<setprecision(2)<<f<<"\n";
    cout<<fixed<<setprecision(2)<<e<<"\n";
    
    
}