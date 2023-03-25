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
    if(v[0]!=1){
        cout<<"NO\n";
        return;
    }
    if(n==1){
        if(v[0]==1) cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    int max=0;
    int cnt_1=1;
    ll sum=1;
    for(int i=1;i<n;i++){
        if(v[i]==1){
            cnt_1++;
        }
        if(v[i]>sum){
            cout<<"NO\n";
            return;
        }
        sum+=v[i];
    }
    cout<<"YES\n";
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