#include<iostream>
using namespace std ;
int main ()
{
    int a,b,temp,s=0;
    cin>>a>>b;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    for(int i=a; i<=b; i++)
    {
        if(i%13!=0)
        {
            s+=i;
        }
    }
    cout<<s<<endl;
}
