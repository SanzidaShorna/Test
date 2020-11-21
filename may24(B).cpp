#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cnt=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int mn=100000;
        int sho=0;
        for(int i=0;i<n-1;i++)
        {
            sho=abs(a[i]-a[i+1]);
            mn=min(mn,sho);
        }
       cout<<mn<<endl;
    }



    return 0;
}
