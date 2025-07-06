// Problem Name : Strings
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
//Date : 23/06/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl<<a<<b<<endl;
    char c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout<<a<<" "<<b<<endl;
}
