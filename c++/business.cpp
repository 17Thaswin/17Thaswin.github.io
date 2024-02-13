#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int p,r,n;
    float a,b,c,d;
    cin>>p>>r>>n;
  
    a=((p*n*r)/100);
    cout<<fixed<<setprecision(2)<<a<<"\n";
    b=a+p;
    cout<<fixed<<setprecision(2)<<b<<"\n";
    c=((a*2)/100);
    cout<<fixed<<setprecision(2)<<c<<"\n";
    d=b-c;
    cout<<fixed<<setprecision(2)<<d<<"\n";
    
}