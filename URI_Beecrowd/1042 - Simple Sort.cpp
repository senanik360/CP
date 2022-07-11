#include<iostream>
using  namespace std ;
int main ()
{
    int a,b,c,i,j,k,temp;
    cin>>a>>b>>c;
    i=a;
    j=b;
    k=c;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    cout<<a<<endl<<b<<endl<<c<<endl<<endl;
    cout<<i<<endl<<j<<endl<<k<<endl;
}
