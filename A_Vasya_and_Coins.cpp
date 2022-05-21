#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
#define mp make_pair
#define pb push_back
#define pob pop_back()
#define mod 1000000007
#define max INT_MAX
#define min INT_MIN
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    fast_cin();
    int t,a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if(a>0)
        cout<<(a+2*b)+1<<endl;
        else if(a==0)
        cout<<"1"<<endl;
    }
    
    return 0;
}