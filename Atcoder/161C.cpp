#include <iostream>

int main(){
    long long n, k;
    std::cin>>n>>k;
    n%=k;
    n=std::min(n, k-n);
    std::cout<<n;

    return 0;
}