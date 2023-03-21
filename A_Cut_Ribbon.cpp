#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
int maxima(int a,int b,int c){
    return max(max(a,b),c);
}
void solve(){
    int n; cin>>n;
    vi v(3);
    cin>>v;
    sort(v.begin(),v.end());
    vi dp(n);
    loop(0,v[0],i) dp[i]=0;
    dp[v[0]]=1;
    for(int i=v[0]+1;i<v[1];i++)
    dp[i]=dp[i-v[0]];
    dp[v[1]]=1+dp[v[1]-v[0]];
    for(int i=v[1]+1;i<v[2];i++)
    dp[i]=max(dp[i-v[0]],dp[i-v[1]])==0?0:max(dp[i-v[0]],dp[i-v[1]])+1;
    dp[v[2]]=1+max(dp[v[2]-v[1]],dp[v[2]-v[0]]);
    for(int i=v[2]+1;i<=n;i++)
    dp[i]=maxima(dp[i-v[0]],dp[i-v[1]],dp[i-v[2]])==0?0:maxima(dp[i-v[0]],dp[i-v[1]],dp[i-v[2]])+1;
    cout<<dp[n];
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    solve();
}