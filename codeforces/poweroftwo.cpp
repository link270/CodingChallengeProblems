#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>

int main(){
    int n, k, count=0;
    std::string result="YES", bin;
    std::vector<int> resultNums;
    std::cin>>n>>k;
    bin = std::bitset<32>(n).to_string();
    reverse(bin.begin(),bin.end());
    for(int i=0;i<bin.length();++i){
        if(k<0){
            result="NO";
            break;
        }

        if(bin[i]=='1'){
            resultNums.push_back(i);
            --k;
        }
    }
    std::cout<<bin<<std::endl;
    for(int i=0;i<resultNums.size();++i){
        std::cout<<resultNums[i]<<" ";
    }
}