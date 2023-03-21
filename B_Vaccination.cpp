#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    int n,k,life,w;
    cin>>n>>k>>life>>w;
    vi v(n);
    cin>>v;
    int start=v[0];
    int cnt=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]-start>w+life || cnt==k){
            cnt=0;
            ans++;
            start=v[i];
        }
        cnt++;
    }
    if(cnt!=0){ans++;}
    cout<<ans<<endl;
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

}