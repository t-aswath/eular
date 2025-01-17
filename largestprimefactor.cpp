// Copyright [2024] <t.aswath>
// project euler 3

#include <bits/stdc++.h>

int main() { 
  long long n = 600851475143;
  int ans=0;
  for(int i=2;i<sqrt(n)+1;i++){
    if(n%i==0){
      int t=1;
      for(int j=2;j<sqrt(i)+1;j++){
        if(i%j==0){
          t=0;
          break;
        }
      }
      if(t){
        ans=i;
      }
    }
  }
  std::cout<<ans<<"\n";
}

