#include<bits/stdc++.h>
 
using namespace std;
 
 
int main() {
  int n ; scanf("%d",&n);
  int odd1=0 , odd2=0 , swaps=0 ; 
  int left , right ; 
  for(int i=0 ; i<n ; i++){
   cin >> left >> right ; 
   if(left%2!=0){
    odd1++;
   }
   if(right%2!=0){
    odd2++;
   }
   if(right%2!=0 && left%2==0 || right%2==0 && left%2!=0){
    swaps++;
   }
  }
  
  if(odd1%2!=0 && odd2%2!=0 && swaps>=1){
   printf("%d",1);
  }
  else if(odd1%2==0 && odd2%2==0){
   printf("%d",0);
  }
  else{
    printf("%d",-1);
  }
 
 
 
 
}
