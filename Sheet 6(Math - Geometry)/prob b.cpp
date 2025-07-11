// Problem Name : Prime checking
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
    if(n<=1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool isprime=true;
    for(long long i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
        isprime=false;
        break;
        }
    }
    if(isprime)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
