#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n, m, t;
    std::vector<int> a;
    std::cin>>n>>m;
    for(int i=0;i<n;++i){
        std::cin>>t;
        a.push_back(t);
    }

    sort(a.begin(), a.end());

    for(int i=0;i<m;++i){
        std::cin>>t;
        std::vector<int>::iterator it;
        it=std::upper_bound(a.begin(),a.end(), t);
        std::cout<<it-a.begin()<<" ";
    }

    return 0;
}