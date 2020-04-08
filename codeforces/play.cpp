#include <iostream>
#include <vector>

int main() {
    int n, m, ci, ti;
    std::cin>>n>>m;
    std::vector<int> v(n), u(m);
    for (int i=0;i<n;++i) {
        std::cin>>ci>>ti;
        v[i]=ci*ti;
    }

    for (int i=0;i<m;++i){
        std::cin >> u[i];
    }

    int tmp=0, j=0;
    for (int i=0;i<m;++i){
        if (u[i]>tmp){
            tmp+=v[j++];
            --i;
        }
        else {
            std::cout<<j<<std::endl;
        }
    }
}