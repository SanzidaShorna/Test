#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b&&b==c)
            cout<<a<<endl;
            else if(a==0&&b>0&&c>0)
            cout<<a<<endl;
        else if(b==0&&a>0&&c>0)
            cout<<b<<endl;
        else if(a==0&&b==0&&c>0)
            cout<<a<<endl;
        else if(a>0&&b>0&&c==0)
            cout<<(a+b)/3<<endl;
        else if(a>b&&c>b)
            cout<<b<<endl;
            else if(a<b&&c<b)
                cout<<a<<endl;
            else if(a<b&&a<c)
                cout<<a<<endl;
            else if(a>b&&a>c)
                cout<<b<<endl;
        else if(a>c&&b>c)
            cout<<(a+b+c)/3<<endl;
        else if(c>a&&c>b)
            cout<<a+b/2<<endl;

    }
}
