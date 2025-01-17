// Copyright [2024] <t.aswath>
// project euler 5

#include <bits/stdc++.h>

int main() { 
  int i = 20;
  while(true){
    int t=1;
    for(int j=2;j<21;j++){
      if(i%j!=0){
        t=0;
        break;
      }
    }
    if(t){
      std::cout<<i;
      break;
    }
    i++;
  }
}
