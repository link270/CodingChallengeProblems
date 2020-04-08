#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map> 

int main()
{
    int n,q,t,c;
    std::vector<int> prices, coins;
    std::unordered_map<int,int> dp;
    std::cin>>n;
    for(int i=0;i<n;++i){
        std::cin>>t;
        prices.push_back(t);
    }
    std::sort(prices.begin(),prices.end());

    std::cin>>q;
    for(int i=0;i<q;++i){
        std::cin>>c;
        int j=0;
        if(dp[c]) t=dp[c];
        else if(c>=prices.back()) t=n;
        else {
            while(j<n && c>=prices[j]){
                j++;
            }
            t = j;
        }

            dp[c]=t;
            coins.push_back(t);
    }

    for(int i=0;i<q;++i){
        std::cout<<coins[i]<<std::endl;
    }

    return 0;
}