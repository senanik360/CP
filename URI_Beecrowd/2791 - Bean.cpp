#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4],k=0;
    for(int i=0; i<4; i++){
        cin>>arr[i];
        if(arr[i]==1) k=i+1;
    }
    cout<<k<<endl;

}

