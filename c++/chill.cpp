#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int t,v;
    cin>>t>>v;
    cout<<fixed<<setprecision(2)<<35.74+(0.6215*t)+((0.4275*t)-35.75)* pow(v,0.16);
}