#include <bits/stdc++.h>

int main(){
    int t=0,f=0;
    for(int i=1;1;i++){
        for(int j=1;j<=t;j++)
            if(t%j==0)
                f++;
        if(f>500){
            std::cout<<t;
            break;
        }
        f=0;
    }
}
