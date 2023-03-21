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
    if(s1==s2){
        cout<<"YES\n";
        return;
    }
    vi v1(26,0),v2(26,0);
    for(int i=0;i<n;i++){
        v1[s1[i]-'a']++;
        v2[s2[i]-'a']++;
    }
    if(v1!=v2 || n<4){
        cout<<"NO\n";
        return;
    }
    if(n==4){
        swap(s1[0],s1[3]);
        if(s1==s2) cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    if(n==5){
        if(s1[2]==s2[2]) cout<<"YES\n";
        else cout<<"NO\n";
        return;
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