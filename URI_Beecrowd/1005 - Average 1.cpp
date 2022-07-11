#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,med;
    cin>>A>>B;
    med=((A*3.5)+(B*7.5))/(3.5+7.5);
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<med<<endl;
}
