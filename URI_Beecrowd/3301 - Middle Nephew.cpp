#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3],k=0;
    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    int mx = max(arr[0],max(arr[1],arr[2]));
    int mn = min(arr[0],min(arr[1],arr[2]));
    for(int i=0; i<3; i++)
    {
        if(arr[i]!=mn && arr[i]!=mx)
        {
            k=i+1;
        }
    }
    if(k==1)
    {
        cout<<"huguinho"<<endl;
    }
    else if(k==2)
    {
        cout<<"zezinho"<<endl;
    }
    else if(k==3)
    {
        cout<<"luisinho"<<endl;
    }

}



