#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y,count=0,sum=0;
        cin>>x>>y;
        while(count!=y)
        {
            if(x%2!=0)
            {
                sum+=x;
                count++;
                x++;
            }
            else x++;
        }
        cout<<sum<<endl;
    }

}

