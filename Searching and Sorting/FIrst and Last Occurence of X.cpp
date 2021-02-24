

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,n) for(ll i=0;i<n;i++)
#define Fo(i,k,n) for(ll i=k;i<n;i++)
#define rev(i,n) for(ll i=n-1;i>=0;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define tr(it,v) for(auto it=v.begin(),it!=v.end();it++)
#define vin(v,k) fo(i,k)cin>>a,v.pb(a);
#define deb(x) cout<<#x<<" "<<x<<'\n';
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);



int main()
{
    fast;
    ll a,b,c,d,p,n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        vector<ll> v;
        vin(v,n);
        bool flag=true;
        ll first=-1,last=-1;
        for(ll i=0;i<n;i++)
        {
            if(v[i]==p and flag)
            {
                first=i;
                flag=false;
            }
            if(v[i]==p)
                last=i;
        }
        if(first==-1 and last==-1)
        {
            cout<<-1<<"\n";
            continue;
        }
        cout<<first<<" "<<last<<"\n";

    }



}







