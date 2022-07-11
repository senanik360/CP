#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int hr,spd;
    float ltr;
    cin>>hr>>spd;
    hr=hr*spd;
    ltr=hr/12.0;
    cout<<fixed<<setprecision(3)<<ltr<<endl;

}
