#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll soln(vector<char> a, vector<char> b){
      set<char> s(a.begin(), a.end());
      ll t=0;
      for(auto i:b){
            if(s.find(i) != s.end()){
                  t++;
            }
      }
      return t;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	      ll n;
	      string s;
	      map<string, vector<char>> m;
	      for(ll i=0; i<n; i++){
	            cin>>s;
	            if(s.length() > 0){
	                m[s.substr(1)].push_back(s[0]);  
	            }
	      }
	      
	      ll ans=0;
	      for(auto i:m){
	            for(auto j:m){
	                  if(i.first != j.first){
	                        ll temp = soln(i.second, j.second);
	                        ans += ( (i.second.size()-temp) * (j.second.size()-temp) );
	                  } 
	            }
	      }
	      cout<<ans<<endl;
	}
	      
	return 0;
}
