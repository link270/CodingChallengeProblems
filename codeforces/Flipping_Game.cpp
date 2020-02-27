#include <iostream>

int main(){
    int n, total=0, count=0, maxCount=-1;
    std::cin>>n;
    int arr[n];

    for(int i=0;i<n;++i){
        std::cin>>arr[i];
        total += arr[i];
    }
    for(int i=n;i>0;--i){
        for(int j=0;j<i;j++){
            for(int k=j;k<i;++k){
                if(arr[k]==1){
                    --count;
                } else {
                    ++count;
                }
                maxCount=std::max(maxCount, count);
            }
            count=0;
        }
    }

    std::cout<<maxCount+total;
}