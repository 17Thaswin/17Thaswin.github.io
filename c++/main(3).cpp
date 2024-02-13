#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=((a+c)/2);
    f=((b+d)/2);
    cout<<fixed<<setprecision(1);
    cout<<"Binoy's house is located at "<<"("<<e<<","<<f<<")";
}