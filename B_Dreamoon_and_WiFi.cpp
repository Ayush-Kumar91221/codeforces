#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lll _int128_t
#define vi vector<int>
template< typename typC> istream &operator>>(istream &cin,vector<typC> &a) {for (auto &x:a)cin>>x; return cin;}
template< typename typC> ostream &operator<<(ostream &cout,vector<typC> &a) {for (auto it:a)cout<<it<<" "; return cout;}
#define loop(a,b,i) for(int i=a;i<b;i++)
ll factorial(int n)
{
    ll ans=1;
    for (int i=1;i<=n;i++)
    ans*=i;
    return ans;
}
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int count1=0,count2=0;
    ll count3=0;
    for (auto it: s1)
    {
        if(it=='+')
        count1++;
        else count1--;
    }
    for (auto it:s2){
        if (it=='+')
        count2++;
        else if(it=='-')
        count2--;
        else count3++;
    }
    int diff=abs(count1-count2);
    if (diff>count3)
    {printf("%.12f",0);return;}
    if ((count3-diff%2)==1){printf("%.12f",0);return;}
    int a=(count3-diff)/2;
    double ans=factorial(count3)/(factorial(a)*factorial(count3-a)*pow(2,count3));
    cout<<setprecision(15)<<ans;
}
int main()
{
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}