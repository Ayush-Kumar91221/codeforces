#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    int k,d;
    cin>>k>>d;
    if(d){
        cout<<d;
        for(int i=1;i<k;i++){
            cout<<0;
        }
    }
    else{
        if(k==1) cout<<0;
        else cout<<"No solution";
    }
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}