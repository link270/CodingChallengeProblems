#include <iostream>
#include <vector>

int main(){
    int k,n,t, gap=0;
    std::vector<int> a;
    std::cin>>k>>n>>t;
    a.push_back(t);
    for(int i=1;i<n;++i){
        std::cin>>t;
        gap=std::max(gap, std::abs(a.back()-t));
        a.push_back(t);
    }

    std::cout<<k-std::max(gap, (k-a.back()+a[0]));
    return 0;
}