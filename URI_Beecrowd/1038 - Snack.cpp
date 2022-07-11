#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    float z;

    cin>>x>>y;

    if(x==1)
    {
        z=y*4;
    }
    if(x==2)
    {
        z=y*4.5;
    }
    if(x==3)
    {
        z=y*5;
    }
    if(x==4)
    {
        z=y*2;
    }
    if(x==5)
    {
        z=y*1.5;
    }
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<z<<endl;
}
