#include <bits/stdc++.h>
using namespace std;

int main() {
      ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
	     int n, jump = 0;
	     cin>>n;
	     int w[n], l[n];
	     for(int i=0; i<n; i++){
	           cin>>w[i];
	     }
	     for(int i=0; i<n; i++){
	           cin>>l[i];
	     }
	     if(n==2){
	           if(w[0] == 1 && w[1] == 2){
	                 cout<<"0"<<endl;
	           }else{
	                 if(l[0] == 1){
	                       cout<<"2"<<endl;
	                 }else{
	                       cout<<"1"<<endl;
	                 }
	           }
	     }
	     if(n==3){
	           long x, x1, y, y1, z, z1, jump=0;
	           for(int i=0; i<n; i++){
	                 if(w[i] == 1){
	                       x=i;
	                       x1=i;
	                 }else if(w[i] == 2){
	                       y=i; 
	                       y1=i;
	                 }else{
	                       z=i; 
	                       z1=i;
	                 }
	           }
	           while(y<=x || z<=y || z<=x){
	                 while(y<=x){
	                       y+=l[y1];
	                       jump++;
	                 }
	                 while(z<=y || z<=x){
	                       z+=l[z1];
	                       jump++;
	                 }
	           }
	           cout<<jump<<endl;
	     }
	     if(n==4){
	           long x, x1, y, y1, z, z1, p, p1, jump=0;
	           for(int i=0; i<n; i++){
	                 if(w[i] == 1){
	                       x=i;
	                       x1=i;
	                 }else if(w[i] == 2){
	                       y=i; 
	                       y1=i;
	                 }else if(w[i] == 3){
	                       z=i; 
	                       z1=i;
	                 }else{
	                       p=i;
	                       p1=i;
	                 }
	           }
	           while(y<=x || z<=y || z<=x || p<=x || p<=y || p<=z){
	                 while(y<=x){
	                       y+=l[y1];
	                       jump++;
	                 }
	                 while(z<=y || z<=x){
	                       z+=l[z1];
	                       jump++;
	                 }
	                 while(p<=x || p<=y || p<=z){
	                       p+=l[p1];
	                       jump++;
	                 }
	           }
	           cout<<jump<<endl;
	     }
	     
	}
	return 0;
}
