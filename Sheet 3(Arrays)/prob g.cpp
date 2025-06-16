// Problem Name : palindrome array
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]
    }
    bool flag=true;
    long long i=0;
    long long j=n-1;
    while(i<=j)
    {
        if(a[i]!=a[j])
        {
        flag=false;
        break;
    }
    i++;
    j--;
}
if(flag==true)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
}
