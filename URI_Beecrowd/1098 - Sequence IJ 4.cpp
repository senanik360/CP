#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    for(float i=0.0; i<2.1; i+=0.2)
    {
        for(float j=1.0; j<=3.0; j++)
        {
            if(i>0.0 && i<1.0 || i>1.0 && i<2.0)
            {
                cout<<fixed<<setprecision(1)<<"I="<<i<<" J="<<i+j<<endl;

            }
            else
            {
                a=i;
                b=i+j;
                cout<<"I="<<a<<" J="<<b<<endl;
            }
        }
    }
}
