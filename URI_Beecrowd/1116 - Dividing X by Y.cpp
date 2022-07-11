#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int d;
    float a,b,c;
    cin>>d;
    for(int i=0; i<d; i++)
    {
        cin>>a>>b;
        if(b==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
        {
            c=a/b;
            cout<<fixed<<setprecision(1)<<c<<endl;
        }
    }
}
