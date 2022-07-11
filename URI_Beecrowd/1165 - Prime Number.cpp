#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    bool r = true;
    for(int i=2; i<=x/2; i++)
    {
        if(x%i==0)
        {
            r = false;
        }
    }
    return r;
}
int main()
{
    int tc,n,sum;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(isPrime(n))
        {
            cout<<n<<" eh primo"<<endl;
        }
        else  cout<<n<<" nao eh primo"<<endl;

    }

}

