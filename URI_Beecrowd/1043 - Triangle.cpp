#include<iostream>
#include<iomanip>
using  namespace std ;
int main ()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
    }
    else
    {
        cout<<"Area = "<<fixed<<setprecision(1)<<((a+b)*c)/2<<endl;
    }
}
