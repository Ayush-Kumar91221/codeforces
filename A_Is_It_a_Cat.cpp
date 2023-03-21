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
    string s;
    cin>>n>>s;
    string s2="meow2";
    int j=0;
    int checker=0;
    for(int i=0;i<n;i++){
        if(char(tolower(s[i]))==s2[j]) continue;
        if(char(tolower(s[i]))==s2[j+1]) j++;
        else{
            cout<<"NO\n";
            return;
        }
    }
    if(j==3 && char(tolower(s[0]))=='m') cout<<"YES\n";
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