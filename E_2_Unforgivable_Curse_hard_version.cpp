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
    string s1,s2;
    cin>>s1>>s2;
    vi v1(26,0),v2(26,0);
    for(auto it:s1) v1[it-'a']++;
    for(auto it:s2) v2[it-'a']++;
    if(v1!=v2){
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<n;i++){
    if(i-k<0 && i+k>=n && s1[i]!=s2[i]){
            cout<<"NO\n";
            return;
        }
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
    while (t--)
    {
        solve();
    }

}