#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,m;
        cin>>n>>q>>m;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll v[1000001] = {};
        map<pair<ll,ll>,ll> map;
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            --l;--r;
            if(a[l]>m)
            {
                continue;
            }
            else if(a[l]<=m && a[r]>m)
            {
                v[a[l]]++;
                v[m+1]--;
            }
            else if(a[r]<=m)    
            {
                v[a[l]]++;
                v[m+1]--;
                map[{a[l],a[r]}]++;
            }
        }
        for(auto x:map)
        {
            ll k = x.first.first;
            ll p = x.first.second;
            ll l = x.second;
            v[p+k] -= l;
            v[p+2*k] += l;
            ll c = p + 2*k;
            while(c+p <= m)
            {
                c += p;
                v[c] -= l;
                v[c+k] += l;
                c += k;
            } 
        }   
        ll maxim = 0;
        for(ll i=1;i<=m;i++)
        {
            v[i] += v[i-1];
            maxim = max(maxim,v[i]);
        }
        cout<<maxim<<endl;
    }
    return 0;
}