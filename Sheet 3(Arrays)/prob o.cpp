// Problem Name : Fibonacci
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 16/06/25
#include<bits/stdc++.h>
using namespace std;
int main()
{


long long index;
long long a[51];
a[1]=0;
a[2]=1;
for(int i=3;i<=50;i++)
{
    a[i]=a[i-1]+a[i-2];
}
cin>>index;
cout<<a[index]<<endl;
}
