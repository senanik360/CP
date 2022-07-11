#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        cin>>n;
        if(n==0)
            cout<<"NULL\n";
        else if(n>0)
        {
            if(n%2==0)
                cout<<"EVEN POSITIVE\n";
            else
                cout<<"ODD POSITIVE\n";
        }
        else
        {
            if(n%2==0)
            {
                cout<<"EVEN NEGATIVE\n";
            }
            else
                cout<<"ODD NEGATIVE\n";
        }
    }
}
