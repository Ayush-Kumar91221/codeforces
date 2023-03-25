#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    vector<ll> v(4);
    cin>>v;
    if(v[0]==0){
        cout<<"1\n";
        return;
    }
    ll ans=0;
    ans+=v[0];
    ans+=2*min(v[1],v[2]);
    ll left=abs(v[1]-v[2])+v[3];
    ans+=min(v[0]+1,left);
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