#include <iostream>
#include <vector>

int main() {
    long long n, t;
    std::vector<int> arr;
    std::cin>>n;
    long long sumLeft=0, sumRight=0, result=0, totalLeft=0, totalRight=n-1;
    for (int i=0;i<n;++i){
        std::cin>>t;
        arr.push_back(t);
    }

    while (totalLeft <= totalRight) {
        if(sumLeft<sumRight) sumLeft+=arr[totalLeft++];
        else sumRight+=arr[totalRight--];
        if (sumLeft==sumRight){
            result=sumLeft;
        }
    }
    std::cout<<result;
}