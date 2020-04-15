#include <iostream>
#include <algorithm>

int main(){
    int n, m;
    double total=0;
    std::cin>>n>>m;
    int a[n];
    std::string result;
    for(int i=0;i<n;++i){
        std::cin>>a[i];
        total+=a[i];
    }

    total=total*(1/(4*(double)m));
    for(int i=0;i<n;++i){
        if(a[i]>=total) m--;
    }

    result=(m<=0)?"Yes":"No";
    std::cout<<result;
    return 0;
}