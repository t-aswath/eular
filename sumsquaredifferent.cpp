// Copyright [2024] <t.aswath>
// project euler 6

#include <bits/stdc++.h>

int main() { 
  int a = ((100+1)*100)/2;
  a = a*a;
  int b=0;
  for(int i=1;i<101;i++){
    b+= (i*i);
  }
  std::cout<<a-b;
}
