#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
    cin>>t;
    long long a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        int cnt=0;
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0)
            {
                cnt++;
                if(cnt>2)
                    break;

            }

            }
            if(cnt==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


    }

}
