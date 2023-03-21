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
    vi a(n);
    cin>>a;
    int first=0,last=0;
    int min_comp=1;
    int max_comp=n;
    for(int i=0;i<n;i++){
        if(a[i]>min_comp && a[i]<max_comp){
            first=i+1;
            break;
        }
        else if(a[i]==min_comp){
            
        }
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