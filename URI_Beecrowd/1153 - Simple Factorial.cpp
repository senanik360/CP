#include<iostream>
using namespace std;
int main()
{
    int n,s=1;
    cin>>n;
    for(int i=n; i>=1; i--)
    {
        s=s*i;
    }
    cout<<s<<endl;
}
