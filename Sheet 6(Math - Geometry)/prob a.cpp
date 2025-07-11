// Problem Name : Power Of Two
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 07/07/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n>0 && (n&(n-1))==0)
       cout<<"YES"<<endl;
       else
{
    cout<<"NO"<<endl;
}
}

