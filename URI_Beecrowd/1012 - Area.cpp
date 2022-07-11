#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
    double pi=3.14159;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<(a*c)/2<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<pi*(c*c)<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<(a+b)/2 *c<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<b*b<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<a*b<<endl;
}

