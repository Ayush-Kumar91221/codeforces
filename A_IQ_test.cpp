#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll __int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    int n;
    cin>>n;
    int a;
    vector<pair<int,int>> v(2,{0,0});
    loop(0,n,i)
    {
        cin>>a;
        v[a&1].first++;
        v[a&1].second=i+1;
    }
    cout<<(v[0]> v[1] ?v[1].second:v[0].second)<<'\n';
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}