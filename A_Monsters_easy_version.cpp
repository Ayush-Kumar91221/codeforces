#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    int n;
    cin>>n;
    vi v(n);
    cin>>v;
    sort(v.begin(),v.end());
    ll ans=0;
    int comparor=0;
    for(int i=0;i<n;i++){
        if(v[i]>=comparor+1){
            comparor++;
            ans+=v[i]-comparor;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}