// Copyright [2024] <t.aswath>
// project euler 10

#include <bits/stdc++.h>

int main(){
    long long ans=2;
    for(int i=3;i<2000000;i+=2){
        int t=1;
        for(int j=2;j<sqrt(i)+1;j++){
            if(i%j==0){
                t=0;
                break;
            }
        }
        if(t)ans+=i;
    }
    std::cout<<ans;
}
