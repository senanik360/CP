#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,a,b=0,c=0,d=0,e=0;
    cin>>tc;
    while(tc--){
        cin>>a;
        if(a%2==0) b++;
        if(a%3==0) c++;
        if(a%4==0) d++;
        if(a%5==0) e++;
    }
    cout<<b<<" Multiplo(s) de 2"<<endl;
    cout<<c<<" Multiplo(s) de 3"<<endl;
    cout<<d<<" Multiplo(s) de 4"<<endl;
    cout<<e<<" Multiplo(s) de 5"<<endl;
}
