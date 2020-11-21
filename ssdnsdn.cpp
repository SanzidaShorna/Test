#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int even=0,od=0;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                od++;
        }
        if(od%2==0)
        {
            od--;
        }
        int k=od+even;
        if(od>=1&&k>=x)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
}
