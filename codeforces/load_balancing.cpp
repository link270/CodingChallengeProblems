#include <iostream>
#include <algorithm>

int main(){
    int n, count=0, total=0, result=0;
    std::cin>>n;
    int servers[n];
    for(int i=0;i<n;++i){
        std::cin>>servers[i];
        total+= servers[i];
    }
    std::sort(servers, servers+n);
    count = total/n;
    for(int i=0;i<n;++i){
        if(servers[i]<count){
            result+=count-servers[i];
        }
    }

    for(int i=1;i<=total-count*n;++i){
        if(servers[n-i]<count+1) ++result;
    }

    std::cout<<result;
}