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
    vi a(n);
    cin>>a;
    int max=*max_element(a.begin(),a.end());
    int min=*min_element(a.begin(),a.end());
    int mac=count(a.begin(),a.end(),max);
    int mic=count(a.begin(),a.end(),min);
    if (max!=min)
    cout<<max-min<<" "<<(1ll*mac*mic)<<endl;
    else cout<<0<<" "<<1ll*n*(n-1)/2;
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();


}