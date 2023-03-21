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
    int x;
    vi v;
    vi hash(101,0);
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        hash[x]++;
    }
    int max_cnt=0;
    for(int i=1;i<=2*n;i++){
        int cnt=0;
        for(int j=1;j<i;j++){
            if(j*2==i){
                cnt+=hash[j];
            }
            else{
                // cout<<v[j]<<' '<<v[i-j];
                cnt+=min(hash[j],hash[i-j]);
            }
        }
        // cout<<cnt<<endl;
        if(cnt>max_cnt)
        max_cnt=cnt;
    }
    cout<<max_cnt/2<<'\n';

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