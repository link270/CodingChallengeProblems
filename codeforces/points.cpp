#include <iostream>
#include <vector>

int main(){
    int n, d, t;
    std::cin>>n>>d;
    std::vector<int> points;
    for(int i=0;i<n;++i){
        std::cin>>t;
        points.push_back(t);
    }

    long long index=0, result=0;
    for(int i=0;i<n;++i){
        while(index<n&&(points[i]+d)>=points[index]){
            ++index;
        }

        result+=((index-i-1)*((index-i-1)-1)/2);
    }

    std::cout<<result;
}