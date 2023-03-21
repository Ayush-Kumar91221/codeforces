#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    int n,k;
    cin>>n>>k;
    vi v(n);
    cin>>v;
    sort(v.begin(),v.end());
    // cout<<v<<endl;
    if(k==0){
        if(v[0]>1) cout<<v[0]-1;
        else cout<<-1;
        return;
    }
    if(k==n){
        cout<<v[k-1];
        return;
    }
    if(v[k-1]==v[k]) cout<<-1;
    else cout<<v[k-1];
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

}