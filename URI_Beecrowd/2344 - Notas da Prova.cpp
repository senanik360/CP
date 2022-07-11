#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t==0)
    {
        cout<<"E"<<endl;
    }
    else if(t>0 && t<=35)
    {
        cout<<"D"<<endl;
    }
    else if(t>=36 && t<=60)
    {
        cout<<"C"<<endl;
    }
    else if(t>=61 && t<=85)
    {
        cout<<"B"<<endl;
    }
    else if(t>=86 && t<=100)
    {
        cout<<"A"<<endl;
    }
}

