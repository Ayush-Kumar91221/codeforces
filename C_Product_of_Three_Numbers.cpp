#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    ll n;
    cin>>n;
    int count=0;
    vi ans(3);
    for(int i=2;i<sqrt(n);i++){
        if (n%i==0)
        {
            n=n/i;
            ans[count]=i;
            count++;
            if (count==2)
            {
                ans[2]=n;
                break;
            }
        }
    }
    if (count==2 && ans[2]!=1 && ans[1]!=ans[2])
    cout<<"YES\n"<<ans<<"\n";
    else cout<<"NO\n";
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