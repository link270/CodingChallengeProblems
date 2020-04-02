#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int n, t, result=0;
    std::vector<int> arr;
    std::cin>>n;
    for(int i=0;i<n;++i){
        std::cin>>t;
        arr.push_back(t);
    }

    std::sort(arr.begin(), arr.end(), [](int x, int y){return y<x;});
    for(int i=0;i<n;++i){
        if(arr[i]<arr[result])++result;
    }

    std::cout<<result;
}