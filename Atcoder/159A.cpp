#include <iostream>

long long Choose(long long a, long long b) 
{ 
    return (a*(a-1)/b); 
}

int main(){
    int n, m;
    std::cin>>n>>m;
    std::cout<<Choose(n, 2)+Choose(m, 2);

    return 0;
}