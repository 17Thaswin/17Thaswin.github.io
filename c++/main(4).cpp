#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    float c,d;
    cin>>a>>b>>c;
    d=(a*b*c)/100;
    cout<<fixed<<setprecision(2)<<d;
}