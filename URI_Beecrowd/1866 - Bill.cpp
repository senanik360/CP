#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,sum;
    cin>>tc;
    while(tc--)
    {
        sum=0;
        cin>>n;
        for(int i=1; i<=n; i++){
            if(i%2!=0) sum+=1;
            else sum-=1;
        }
        cout<<sum<<endl;
    }

}

