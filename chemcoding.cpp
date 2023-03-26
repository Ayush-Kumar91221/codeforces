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
    map <int,int> m;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<0){
            m[-1*x]--;
        }
        else m[x]++;
    }
    int min_neg=INT_MAX;
    int min_pos=INT_MAX;
    int min=INT_MAX;
    cout<<min<<" "<<min_pos<<" "<<min_neg<<endl;
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
        if(it.second==0){
            cout<<"0\n";
            return;
        }
        if(it.second<0){
            if(it.second==-2)
            min_neg=it.first;
        }
        if(it.second>=0){
            if(min>min_pos+it.first){
                min=min_pos+it.first;
            }
            min_pos=it.first;
        }
        if(abs(min_pos-min_neg)<min){
            min=abs(min_pos-min_neg);
        }
    }
    cout<<min<<endl;
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}