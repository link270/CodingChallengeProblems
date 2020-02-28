#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int n,m,count=0,t;
    std::cin>>n>>m;
    int arr[n],tracker[100001];
    std::fill_n(tracker,100001,0);

    for(int i=0;i<n;++i){
        std::cin>>arr[i];
    }

    for(int j=n-1;j>=0;--j){
        if(tracker[arr[j]]==0){
            count++;
            tracker[arr[j]] = count;
            std::cout<<"count: "<<count<<" j: "<<j<<" arr: "<<arr[j]<<std::endl;
        }
    }

    for(int i=0;i<m;++i){
        std::cin>>t;
        std::cout<<"t: "<<t<<" "<<tracker[arr[t-1]]<<std::endl;
    }


    // for(int k=0;k<m;++k){
    //     int i;
    //     std::cin>>i;
    //     if(i==n){
    //         result = 1;
    //     }else{
    //         i--;
    //         bool tracker[100001];
    //         std::fill_n(tracker,100001,false);
    //         result=0;
    //         for(int j=i;j<n;++j){
    //             if(!tracker[arr[j]]){
    //                 ++result;
    //                 tracker[arr[j]] = true;
    //             }
    //         }
    //     }

    //     std::cout<<result<<std::endl;
    // }
    
    return 0;
}