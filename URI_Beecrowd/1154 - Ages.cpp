#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,n=0;
    float avg,j=0;
    while(1)
    {
        cin>>a;
        if(a<0)break;
        else
        {
            n+=a;
            j++;
        }
        avg=n/j;
    }
    cout<<fixed<<setprecision(2)<<avg<<endl;
}
