#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(ll n){
      for(ll i=2; i*i<=n; i++){
            if(n%i == 0){
                  return false;
            }
      }
      return true;
}

int main() {
	ll t, dp[1000001], count=0;
	scanf("%lld", &t);
	dp[0] = dp[1] = 0;
	for(ll i=2; i<=1000000; i++){
	      if(check(i)){
	            count++;
	      }
	      dp[i] = count;
	}
	while(t--){
	      ll x, y;
	      scanf("%lld%lld", &x, &y);
	      if(dp[x]<=y){
	           printf("Chef\n");
	      }else{
	           printf("Divyam\n");
	      }
	}
	
	return 0;
}
