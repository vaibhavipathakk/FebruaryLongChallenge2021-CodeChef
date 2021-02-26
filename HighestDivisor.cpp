#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	int ans = 0;
	for(int i=10; i>=1;i--){
	      if(x%i == 0){
	            ans = i;
	            break;
	      }else{
	            continue;
	      }
	}
	
	cout<<ans<<endl;
	
	return 0;
}
