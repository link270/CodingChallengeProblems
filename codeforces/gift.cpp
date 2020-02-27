#include <iostream>

int main(){
    int n, a, one=0, two=0;
    std::string result="NO";
    std::cin>>n;
    for(int i=0;i<n;++i){
        std::cin>>a;
        if(a==100) ++one;
        else ++two;
    }

    if(one%2==0 && one!=0){
        result="YES";
    } else if(one == 0 && two%2 == 0){
        result="YES";
    }

    std::cout<<result;
}