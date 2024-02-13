#include<iostream>
#include<string>
using namespace std;
int main()
{
    int s,op,s1,op1;
    string t1,t2;
    cout<<"Team 1:";
    cout<<"\nTeam Name:";
    getline(cin,t1);
    cout<<"\nScore:";
    cin>>s;
    cout<<"\nOvers played:";
    cin>>op;
    cin.ignore();
    cout<<"\nTeam 2:";
    cout<<"\nTeam Name:";
    getline(cin,t2);
    cout<<"\nScore:";
    cin>>s1;
    cout<<"\nOvers played:";
    cin>>op1;
    cout<<"\nMatch Details:\nTeam 1:\nName: "<<t1<<"\nScore: "<<s<<"\nOvers played: "<<op;
    cout<<"\nTeam 2:\nName: "<<t2<<"\nScore: "<<s1<<"\nOvers played: "<<op1;

    
}