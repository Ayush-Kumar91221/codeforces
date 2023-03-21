#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
bool ispal(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    return true;
}
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    vi v(26,0);
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(v[i]&1){
            cout<<(n&1?"First": "Second");
            return;
        }
    }
    cout<<"First";

}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}