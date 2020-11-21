#include<bits/stdc++.h>
using namespace std;
const long long INF=1e9+7;
int dp[1000][3];
int main()
{
    int cas=1;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<3;j++)
            {
                int x;
                cin>>x;
                dp[i][j]=INF;
                for(int k=0;k<3;k++)
                {
                    if(j==k)
                        continue;
                    dp[i][j]=min(dp[i][j],dp[i-1][k]+x);
                }
            }
        }
        int ans=INF;
        for(int i=0;i<3;i++)
        {
            ans=min(ans,dp[n][i]);
        }
            printf("Case %d: %d\n",cas++,ans);

    }
}
