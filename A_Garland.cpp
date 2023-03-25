#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    string s;
    cin>>s;
    vi v(10,0);
    for(auto it:s){
        v[it-'0']++;
    }
    sort(v.begin(),v.end());
    if(v[9]==4){
        cout<<"-1\n";
    }
    else if(v[9]<3){
        cout<<"4\n";
    }
    else{
        cout<<"6\n";
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