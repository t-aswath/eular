// Copyright [2024] <t.aswath>
// project euler 4


#include <algorithm>
#include <bits/stdc++.h>

int main(){
  int ans=0;
  for(int i=999;i>99;i--){
    for(int j=i;j>99;j--){
      if(i*j>ans){
        std::string r = std::to_string(i*j);
        std::string t = std::to_string(i*j);
        std::reverse(r.begin(),r.end());
        if(t==r)ans=i*j;
      }
    }
  }
  std::cout<<ans;
}
