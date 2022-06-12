#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define mp make_pair
#define pb push_back
#define pob pop_back()
#define mod 1000000007
#define ma INT_MAX
#define mi INT_MIN
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    string s1,s2;
    cin>>s1>>s2;
    vector<char> c;
    sort(s1.begin(), s1.end());
    sort(s2.begin(),s2.end());
    int i=0,j=0;
    int a=k,b=k;
    while(i<n && j<m)
    {
        if(s1[i]-'a'<s2[j]-'a' && a!=0)
        {
            c.pb(s1[i]);
            a--;
            i++;
            b=k;
        }
        else if(s1[i]-'a'<s2[j]-'a' && a==0)
        {
            c.pb(s2[j]);
            j++;
            b--;
            a=k;
        }
        else if(s1[i]-'a'>s2[j]-'a' && b!=0)
        {
            c.pb(s2[j]);j++;b--;a=k;
        }
        else if(s1[i]-'a'>s2[j]-'a' && b==0)
        {
            c.pb(s1[i]);i++;a--;b=k;
        }
    }
    for(i=0;i<c.size(); i++)
    cout<<c[i];
}
int main()
{
    fast_cin();
    ll t;
    cin>>t;
    while(t--)
    {
       solve();
       cout<<endl;
    }
    return 0;
}