#include <iostream>

bool combinationCheck(int current, int angles[], int index){
    if(current%360==0 && index<0) return true;
    if(index<0) return false;
    --index;
    return combinationCheck(current-angles[index+1],angles,index) ||
           combinationCheck(current+angles[index+1],angles,index);
}

int main(){
    int n, sum=0;
    std::string result="NO";
    std::cin>>n;
    int angles[n];
    for(int i=0;i<n;++i){
        std::cin>>angles[i];
        sum+=angles[i];
    }

    if(sum%360==0 || combinationCheck(0,angles,n-1)){
        result="YES";
    }

    std::cout<<result;
}