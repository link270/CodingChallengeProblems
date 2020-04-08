#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n, m, q, t, total=0;
    std::vector<int> a, b;
    std::cin>>n>>q;
    for(int i=0;i<n;++i){
        std::cin>>t;
        a.push_back(t);
        total+=t;
    }

    b=a;
    m=0;
    for(int i=0;i<q;++i){
        std::cin>>t;
        while(t>0&&m>0){
            if(t>=total){
                m=n;
                break;
            }

            t-=a[i];
            if()
        }

        std::cout<<m<<std::endl;
    }

    return 0;
}