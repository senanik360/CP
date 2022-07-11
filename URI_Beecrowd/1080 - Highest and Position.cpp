#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],narr[100],j=0;
    for(int i=0; i<100; i++)
    {
        cin>>arr[i];
        narr[i]=arr[i];
    }
    sort(narr, narr+100);
    for(int i=0; i<100; i++)
    {
        if(arr[i]==narr[99])
        {
            cout<<narr[99]<<endl<<i+1<<endl;
        }
    }

}
