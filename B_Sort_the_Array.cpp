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
    vi v(n+2);
    v[0]=0;
    v[n+1]=INT_MAX;
    for (int i=1;i<=n;i++)
    cin>>v[i];
    int a=1,b=n;
    while(a<n && v[a]<=v[a+1])
    a++;
    while( b>1 && v[b]>=v[b-1] )
    b--;
    // cout<<a<<b;
    if (a==n && 1==b){
    cout<<"yes\n"<<a<<" "<<a;
    return;
    }
    
    if (v[a]>v[b+1] || v[b]<v[a-1])
    {
        cout<<"no\n";
        return;
    }
    for (int i=a;i<b;i++)
    {
        if(v[i]<v[i+1])
        {
            cout<<"no\n";

            return;
        }
    }
    cout<<"yes\n"<<a<<" "<<b;
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

}