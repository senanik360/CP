#include<bits/stdc++.h>
using namespace std;
int main()
{
    float arr,sum=0,count=0;
    for(int i=0; i<6; i++)
    {
        cin>>arr;
        if(arr>0)
        {
            sum+=arr;
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl<<fixed<<setprecision(1)<<sum/count<<endl;
}
