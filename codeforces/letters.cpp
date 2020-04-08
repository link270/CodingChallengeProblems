#include <iostream>
#include <vector>
 
int main() {
    long long n, m, t=0, j=0;
    std::cin>>n>>m;
    std::vector<long long> a(n), b(m);
    for (int i=0;i<n;++i) {
        std::cin>>a[i];
    }

    for (int i=0;i<m;++i){
        std::cin>>b[i];
    }

    for (int i=0;i<m;++i) {
        if (b[i]>t) {
            t+=a[j++];
            --i;
        }
        else {
            std::cout<<j<<" "<<a[j-1]-t+b[i]<<std::endl;
        }
    }
}