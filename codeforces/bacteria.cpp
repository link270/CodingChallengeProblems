#include <iostream>

int main(){
    int x, result=0;
    std::cin>>x;
    while(x>0){
        if(x%2==1){
            result++;
        }
        x=x/2;
    }
    std::cout<<result;
}