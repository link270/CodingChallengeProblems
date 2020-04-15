#include <iostream>

int main(){
    double l;
    std::cin>>l;
    std::cout.precision(12);
    l/=3.0;
    std::cout<<l*l*l;

    return 0;
}