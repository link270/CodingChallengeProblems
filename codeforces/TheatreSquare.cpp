#include <iostream>
#include <iomanip>
#include <math.h>
 
int main(){
    double n, m, a;
    std::cin>>n>>m>>a;
    double w = ceil(n/a), h = ceil(m/a);
    double result = w*h;
    std::cout<<std::fixed<<std::setprecision(0)<<result;
}