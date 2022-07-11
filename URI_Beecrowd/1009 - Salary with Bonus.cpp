#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char name[30];
    float salary;
    double sale,total;
    cin>>name;
    cin>>salary>>sale;
    total=salary+(sale*.15);
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;
}
