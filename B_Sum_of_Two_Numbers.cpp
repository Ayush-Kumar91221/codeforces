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
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<"\n";
    }
    else{
        if(n%100000000==99999999 && (n/100000000)%2){
            cout<<n/2-45454545<<" "<<n/2+45454546<<"\n";
            return;
        }
        if(n%10000000==9999999 && (n/10000000)%2){
            cout<<n/2-4545454<<" "<<n/2+4545455<<"\n";
            return;
        }
        if(n%1000000==999999 && (n/1000000)%2){
            cout<<n/2-454545<<" "<<n/2+454546<<"\n";
            return;
        }
        if(n%100000==99999 && (n/100000)%2){
            cout<<n/2-45454<<" "<<n/2+45455<<" \n";
            return;
        }
        if(n%10000==9999 && (n/10000)%2){
            cout<<n/2-4545<<" "<<n/2+4546<<" \n";
            return;
        }
        if(n%1000==999 && (n/1000)%2){
            cout<<n/2-454<<" "<<n/2+455<<" \n";
            return;
        }
        if(n%100==99 && (n/100)%2){
            cout<<n/2-44<<" "<<n/2+45<<" \n";
            return;
        }
        if(n%10==9 && (n/10)%2){
            cout<<n/2-4<<" "<<n/2+5<<"\n";
            return;
        }
        cout<<n/2<<" "<<n/2+1<<"\n";
    }
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