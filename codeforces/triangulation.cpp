#include <iostream>

int main(){
    int n, result=0;
    std::cin>>n;
    for(int i=1;i+2<=n;++i){
        for(int j=i+1;j+1<=n;++j){
            //for(int k=j+1;k<=n;++k){
                result += i*j*(j+1);
            //}
        }
    }

    std::cout<<result;
    return 0;
}