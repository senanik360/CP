
#include<bits/stdc++.h>
using namespace std;
int main()
{

    for(int i=1; i<=7; i++)
    {
        if(i==1)
        {
            int tc=39;
            while(tc--)
            {
                cout<<"-";
            }
            cout<<endl;
        }
        if(i==2 || i==3 || i==4 || i==5 || i==6)
        {
            cout<<"|";
            for(int i=1; i<=37; i++)
            {
                cout<<" ";
            }
            cout<<"|";
            cout<<endl;
        }
        if(i==7)
        {
            int tc=39;
            while(tc--)
            {
                cout<<"-";
            }
            cout<<endl;
        }
    }
}
