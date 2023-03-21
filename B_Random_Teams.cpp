#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
ll minCalc(ll n,ll m,ll min)
{       
    ll k=n/m;
    if(n%m==0 || n<1)
    return min+m*k*(k-1)/2;
    else{
        int a=n-k*m;
        k++;
        min+=a*k*(k-1)/2;
        m-=a;
        n-=k*a;
        // cout<<n<<" "<<m<<endl;
        return minCalc(n,m,min);
    }
}
void solve(){
    ll n,m;
    cin>>n>>m;
    ll max=(n-m)*(n-m+1)/2;
    ll min=minCalc(n,m,0);
    cout<<min<<" "<<max;
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

}