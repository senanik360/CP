#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int cdsum=c+d;
    int absum=a+b;

    if((b>c) && (d>a) && (cdsum>absum) && (c>0) && (d>0) && (a%2==0)  )

    {
        cout<<"Valores aceitos"<<endl;
    }
    else
    {
        cout<<"Valores nao aceitos"<<endl;
    }
}
