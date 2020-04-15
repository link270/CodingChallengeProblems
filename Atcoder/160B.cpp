#include <iostream>

int main(){
    int result=0, x, t=0;
    std::cin>>x;
    t+=x/500;
    result+=t*1000;
    x-=t*500;
    result+=(x-x%5);
    std::cout<<result;
    return 0;
}