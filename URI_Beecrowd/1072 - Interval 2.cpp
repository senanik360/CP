#include<iostream>
using namespace std;
int main()
{
    int in=0,out=0,n,m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>n;
        if(n>=10 && n<=20) in++;
        else out++;
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
}
