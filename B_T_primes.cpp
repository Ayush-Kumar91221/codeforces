#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
vector <bool> Primes(1e6+1,true);
bool prime(int n){
    ll n2=sqrt(n);
    if(n==2)
    return true;
    if (n%2==0)
    return false;
    for(int i=3;i<=n2;i+=2)
    if (n%i==0) return false;
    
    return true;
}
void solve(){
    ll n;
    cin>>n;
    ll n2=sqrt(n);
    if (n2*n2==n && Primes[n2] && (n2&1!=0 || n2==2)&& n!=1) cout<<"YES\n";
    else cout<<"NO\n";
}
int main()
{   
    for (int i=3;i<1e6;i+=2){
        for (int j=3;i*j<1e6;j+=2)
        Primes[i*j]=false;
    }
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