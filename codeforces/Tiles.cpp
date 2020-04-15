#include <iostream>
#include <math.h>

int main(){
    long long w, h, result=1;
    std::cin>>w>>h;
    for(int i=0;i<w+h;++i) result=(result*2)%998244353;
    std::cout<<result;

    return 0;
}