#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)n++;
    for(int i=1; i<=6; i++)
    {
        cout<<n<<endl;
        n+=2;
    }
}

