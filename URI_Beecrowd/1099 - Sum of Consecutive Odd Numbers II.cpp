#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b,sum;
    cin>>tc;
    while(tc--)
    {
        sum=0;
        cin>>a>>b;
        if(b>a)
        {
            for(int i=a+1; i<b; i++)
            {
                if(i%2!=0) sum+=i;
            }
            cout<<sum<<endl;
        }
       else if(a>b)
        {
            for(int i=b+1; i<a; i++)
            {
                if(i%2!=0) sum+=i;
            }
            cout<<sum<<endl;
        }

      else  cout<<0<<endl;

    }
}


