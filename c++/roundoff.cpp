#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    float a;
    cin>>a;
    cout<<floor(a)<<"\n";
    cout<<fixed<<setprecision(1)<<ceil(a)<<"\n";
    cout<<fixed<<setprecision(1)<<floor(a);
}