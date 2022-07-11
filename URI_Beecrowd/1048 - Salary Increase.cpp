#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a=0,n;
    cin>>n;
    if(n>=0 && n<=400.00)
    {
        a=(n*.15);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+n<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: "<<"15 %"<<endl;
    }
    else if(n>=400.01 && n<=800.00)
    {
        a=(n*.12);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+n<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: "<<"12 %"<<endl;
    }
    else if(n>=800.01 && n<=1200.00)
    {
        a=(n*.10);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+n<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: "<<"10 %"<<endl;
    }
    else if(n>=1200.01 && n<=2000.00)
    {
        a=(n*.07);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+n<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: "<<"7 %"<<endl;
    }
    else if(n>2000.00)
    {
        a=(n*.04);
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<a+n<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: "<<"4 %"<<endl;
    }
}
