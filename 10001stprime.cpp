// Copyright [2024] <t.aswath>
// project euler 7

#include <bits/stdc++.h>

int main() { 
  int a=2;
  int c=1;
  while(c!=10001){
    int t=1;
    for(int i=2;i<sqrt(a)+1;i++){
      if(a%i==0){
        t=0;
        break;
      }
    }
    if(t){
      c+=1;
    }
    a++;
  }
  std::cout<<a-1;
}
