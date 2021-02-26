#include <bits/stdc++.h>
using namespace std;

long conversion24(string s1, string s2){
      long inttime;
      int m1 = int(s1[3]-48);
      int m2 = int(s1[4]-48);
      int min = m1*10 + m2;
      int hour;
      if(s2 == "PM"){
         if(s1[0] == '1' && s1[1] == '2'){
              int h1 = int(s1[0]-48);
              int h2 = int(s1[1]-48);
              hour = h1*10 + h2;
         }else{
               int t = int(s1[0]-48);
               t *= 10;
               t += int(s1[1]-48);
               t += 12;
               int r = t%10;
               s1[1] = char(r+48);
               s1[0] = char(int(t/10)+48);
               int h1 = int(s1[0]-48);
               int h2 = int(s1[1]-48);
               hour = h1*10 + h2;
         }
   }else{
         if(s1[0] == '1' && s1[1] == '2'){
               int t = int(s1[0]-48);
               t *= 10;
               t += int(s1[1]-48);
               t -= 12;
               int r = t%10;
               s1[1] = char(r+48);
               s1[0] = char(int(t/10)+48);
               int h1 = int(s1[0]-48);
               int h2 = int(s1[1]-48);
               hour = h1*10 + h2;
         }else{
              int h1 = int(s1[0]-48);
              int h2 = int(s1[1]-48);
              hour = h1*10 + h2;
         }
   }
   inttime = hour*100 + min;
   return inttime;
   
}
void solution(){
   string p, half;
   cin>>p>>half;
   long n;
   cin>>n;
   long pp = conversion24(p,half);
   string w,x,y,z;
   for(long i=0; i<n; i++){
         cin>>w>>x>>y>>z;
         long start = conversion24(w,x);
         long end = conversion24(y,z);
         
         if(pp>=start && pp<=end){
               cout<<"1";
         }else{
               cout<<"0";
         }
   }
   cout<<endl;
   return;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	   solution();
	}
	      
	return 0;
}
