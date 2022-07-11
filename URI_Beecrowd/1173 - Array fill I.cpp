#include<iostream>
using namespace std;
int main()
{
    int T=0,n,N[10];
    cin>>n;
    for(int i=0; i<10; i++)
    {
        cout<<"N["<<i<<"]"<<" = "<<n<<endl;
        n*=2;
    }
}
