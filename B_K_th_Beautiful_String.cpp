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
    ll k;
    cin>>k;
    long double r=(-1+sqrt(1+8*k))/2;
    int r2=r;
    if (r!=int(r))r2++;
    r2=n-r2;
    ll r3=r;
    k=k-r3*(r3+1)/2;
    for(int i=1;i<r2;i++) cout<<"a";
    cout<<'b';
    if(k==0)
    {
        cout<<'b';
        for (int i=r2+2;i<=n;i++)
        cout<<'a';
        cout<<'\n';
    }
    else{
        k=n-r2-k+1;
        for (int i=1;i<k;i++)
        cout<<'a';
        cout<<'b';
        for (int i=k+r2;i<n;i++)
        cout<<'a';
        cout<<'\n';
    }
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