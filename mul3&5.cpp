// Copyright [2024] <t.aswath>
// project euler problem 1

#include <bits/stdc++.h>

int formula(int n, int a) { return (n * ((2 * a) + ((n - 1) * a))) / 2; }

int main() {
  int t = 333;
  int f = 199;
  int ff = 66;
  printf("%d", formula(t, 3) + formula(f, 5) - formula(ff, 15));
}
