#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    float a,result;
    cin>>tc;
    while(tc--)
    {
        result=0.0;
        for(int i=0; i<3; i++)
        {
            cin>>a;
            if(i==0) a*=2;
            if(i==1) a*=3;
            if(i==2) a*=5;
            result+=a;
        }
        cout<<fixed<<setprecision(1)<<result/10<<endl;
    }

}
