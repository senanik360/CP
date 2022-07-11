#include<iostream>
using namespace std ;
int main ()
{
    int k=7;
    for(int i=1; i<10; i+=2)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"I="<<i<<" J="<<k<<endl;
            k--;
        }
        k+=5;
    }
}
