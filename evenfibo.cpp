// Copyright [2024] <t.aswath>
// project eular problem 2

#include <bits/stdc++.h>

int main() {
  long long fibo = 0;
  long long fiboo = 1;
  long long ans = 0;
  while (fibo < 4000000) {
    if (fibo % 2 == 0)
      ans += fibo;
    long long temp = fiboo;
    fiboo = fiboo + fibo;
    fibo = temp;
  }
  std::cout << ans;
  return 0;
}
