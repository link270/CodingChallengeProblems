#include <iostream>
#include <algorithm>

int main(){
    int n, w, t, result=0, min=0, max=0;
    std::cin>>n>>w;
    for(int i=0;i<n;++i){
        std::cin>>t;
        result+=t;
        min=std::min(result,min);
        max=std::max(result, max);
    }

    if (min<0) max-=min;
    result=(max>w)?0:w-max+1;
    std::cout<<result;

    return 0;
}