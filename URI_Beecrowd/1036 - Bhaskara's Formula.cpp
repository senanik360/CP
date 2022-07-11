#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,x,y,z;
    cin>>a>>b>>c;
    x=(b*b)-(4*a*c);
    if(x<0 || a==0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        y=(-b+ sqrt(x))/(a+a);
        z=(-b - sqrt(x))/(a+a);
        cout<<fixed<<setprecision(5)<<"R1 = "<<y<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<z<<endl;
    }
}

