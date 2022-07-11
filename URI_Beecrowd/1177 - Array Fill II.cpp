#include<iostream>
using namespace std;
int main()
{
    int T=0,n,N[1000];
    cin>>n;
    for(int i=0; i<1000; i++)
    {
        cout<<"N["<<i<<"]"<<" = "<<T<<endl;;
        T++;
        if(n==T)
            T=0;
    }
}
