// Copyright [2024] <t.aswath>
// project euler 9

#include <bits/stdc++.h>

int main(){
    long long ans=0;
    for(int i=3;i<1000;i++){
        for(int j=i+1;j<1000;j++){
            double k = sqrt((i*i)+(j*j));
            if(i+j+k==1000){
                ans=(long long)i*j*k;
                break;
            }
        }
    }
    std::cout<<ans;
}

