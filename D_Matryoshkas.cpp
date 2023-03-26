#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int x;
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>x;
            m[x]++;
        }
        auto temp=m.begin();
        int maxima=temp->second;
        int last=temp->first-1;
        int last_cnt=temp->second;
        ll ans=0;
        for(auto it:m){
            if(it.first-last!=1){
                ans+=maxima;
                maxima=it.second;
                last=it.first;
                last_cnt=it.second;
                continue;
            }
            if(last_cnt<it.second){
                ans+=maxima-last_cnt;
                maxima=it.second;
                last_cnt=it.second;
                last=it.first;
                continue;
            }
            last_cnt=it.second;
            // maxima=max(last_cnt,maxima);
            last=it.first;
        }
        ans+=maxima; 
        cout<<ans<<endl;
    }
}