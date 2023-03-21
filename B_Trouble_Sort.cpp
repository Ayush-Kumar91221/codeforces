#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
bool isAscending(vi &v){
    for (int i=0;i<v.size()-1;i++)
    {
        if(v[i]>v[i+1])
        return false;
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    vi v(n);
    cin>>v;
    int count0=0,count1=0;
    int x;
    loop(0,n,i){
        cin>>x;
        if (x)
        count1++;
        else count0++;
    }
    if(isAscending(v)){
        cout<<"Yes\n";
        return;
    }
    if (count1==n || count0==n)
    cout<<"No\n";
    else cout<<"Yes\n";
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