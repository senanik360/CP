#include<iostream>
using namespace std;
int main()
{
    float n;
    cin>>n;
    if(n>=0 && n<=25.0000)
    {
        cout<<"Intervalo [0,25]"<<endl;
    }
    else if(n>=25.00001 && n<=50.0000000)
    {
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(n>=50.00000001 && n<=75.0000000)
    {
        cout<<"Intervalo (50,75]"<<endl;
    }
    else if (n>=75.00000001 && n<=100.0000000)
    {
        cout<<"Intervalo (75,100]"<<endl;
    }
    else
        cout<<"Fora de intervalo"<<endl;
}

