#include <iostream>
#include <algorithm>

int main(){
    int x, y, z;
    std::cin>>x>>y>>z;
    std::swap(x, y);
    std::swap(x, z);
    std::cout<<x<<" "<<y<<" "<<z;
    return 0;
}