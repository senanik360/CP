#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[26]= {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char c;
    cin>>c;
    for(int i=0; i<26; i++)
    {
        if(arr[i]==c) cout<<i+1<<endl;
    }

}
