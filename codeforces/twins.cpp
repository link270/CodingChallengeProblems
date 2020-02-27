#include <iostream>
#include <algorithm>

int main(){
    int n, result=0, total=0, count=0;
    std::cin>>n;
    int coins[n];
    for(int i=0;i<n;++i){
        std::cin>>coins[i];
        total += coins[i];
    }

    std::sort(coins, coins+n);

    for(int i=n-1;i>=0;--i){
        if (count > total/2){
            break;
        }
        count+=coins[i];
        result++;
    }

    std::cout<<result;
}