#include<iostream>
using namespace std;
int main()
{
    int hr=0, mn=0, sec=0;
    int n;
    cin>>n;
    hr=n/3600;
    n=n%3600;
    mn=n/60;
    sec=n%60;
    cout<<hr<<":"<<mn<<":"<<sec<<endl;
}

