#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
    if(s1[0]==s2[0]){
        cout<<"YES\n"<<s1[0]<<"*\n";
        return;
    }
    if(s1[n1-1]==s2[n2-1]){
        cout<<"YES\n"<<"*"<<s1[n1-1]<<"\n";
        return;
    }
    for(int i=0;i<n1-1;i++){
        for(int j=0;j<n2-1;j++){
            if(s1[i]==s2[j] && s1[i+1]==s2[j+1]){
                cout<<"YES\n*"<<s1[i]<<s1[i+1]<<"*\n";
                return;
            }
        }
    }
    cout<<"NO\n";
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