#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc=5,n;
    int count=0;
    while(tc--)
    {
        cin>>n;
        if(n%2==0){
            count++;
        }
    }
    cout<<count<<" valores pares"<<endl;

}

