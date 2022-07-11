#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,arr[5],count=0;
    cin>>tc;
    for(int i=0; i<5; i++){
        cin>>arr[i];
        if(tc==arr[i]) count++;
    }
    cout<<count<<endl;

}

