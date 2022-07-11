#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,temp,n,sum=0;
    cin>>a>>b;
    if(a>b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    if(a%2==0)
    {
        a++;
        n=a;
    }
    else
    {
        n=a+2;
    }
    for(int i=n; i<b; i+=2)
    {
        sum+=i;
    }
    cout<<sum<<endl;
}
