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
    int t,n;
    cin>>t;
    while (t--)
    {
        int s=0,e=0,nn=1;
        cin>>n;
        signed int a[n];
        for(int i=0;i<n; i++)
        cin>>a[i];
        
        int c= (n-1)/2;
        for(int i=c; i>=0; i--)
        if(a[i]==0)
        {s=i+1;i=-1;}
        for(int j=c+1; j<n; j++)
        if(a[j]==0)
        {e=n-j;j=n;}

        if((n)-(s+e)<=0)
        cout<<s<<" "<<e<<endl;
        else
        {
            for(int i=s; i<(n-e); i++)
            nn*=a[i];
            if(nn>0)
            cout<<s<<" "<<e<<endl;
            else
            {
                int cst1=1, cst2=1,fo,fl;
                for(int i=s; i<n-e; i++)
                {
                    cst1*=a[i];
                    if(a[i]==-1)
                    {
                        fo=i;
                        break;
                    }
                }
                for(int i= n-e-1; i>=s; i--)
                {
                    cst2*=a[i];
                    if(a[i]==-1)
                    {
                        fl=i;
                        break;
                    }
                }
                if(cst1<=cst2)
                s+=fo;
                else
                e+=fl;
            }
            
        }
    }
    
    return 0;
}