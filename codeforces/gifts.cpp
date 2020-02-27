#include <iostream>
#include <algorithm>
#include<vector>

int main(){
    int n,t=0;
    std::vector<int> noGift;
    std::cin>>n;
    int friends[n];
    bool gifts[n];
    std::fill_n(gifts,n,false);

    for(int i=0;i<n;++i){
        std::cin>>friends[i];
        if(friends[i]!=0){
            gifts[friends[i]-1] = true;
        } else ++t;
    }

    if(t==0){
        for(int i=1;i<n;++i){
            std::cout<<i+1<<" ";
        }
        std::cout<<1;
        return 0;
    }

    for(int i=0;i<n;++i){
        if(!gifts[i]){
            noGift.push_back(i+1);
        }
    }

    sort(noGift.begin(),noGift.end());

    while(!noGift.empty()){
        int f = noGift.back();
        noGift.pop_back();
        for(int i=0;i<n;++i){
            if(friends[i] == 0 && i+1!=f){
                friends[i] = f;
                break;
            }
        }
    }

    for(int i=0;i<n;++i){
        std::cout<<friends[i]<<" ";
    }
}