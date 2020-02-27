#include <iostream>
#include <algorithm>

int cmpr(const void *arg1, const void *arg2)
        {
            int const *lhs = static_cast<int const*>(arg1);
            int const *rhs = static_cast<int const*>(arg2);
            return (lhs[0] < rhs[0]) ? -1
                :  ((rhs[0] < lhs[0]) ? 1
                :  (lhs[1] < rhs[1] ? -1
                :  ((rhs[1] < lhs[1] ? 1 : 0))));
        }

int main(){
    int n;
    std::string result = "Poor Alex";
    std::cin>>n;
    int laptops[n][2];
    for(int i=0;i<n;++i){
        std::cin>>laptops[i][0];
        std::cin>>laptops[i][1];
    }

        std::qsort(laptops, n, sizeof(*laptops), cmpr);

    for(int i=0;i<n-1;++i){
        if(laptops[i][1]>laptops[i+1][1]){
            result = "Happy Alex";
            break;
        }
    }

    std::cout<<result;
}