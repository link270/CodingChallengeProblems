#include <algorithm>
#include <iostream>
#include <vector>

int move(int a, int start, int end){
    return abs(a - start) + abs(start - end);
}

int main(){
    int n, a, t, upper, lower, next;
    std::vector<int> c;
    std::cin>>n>>a;
    if(n<2){
        std::cout<<0;
        return 0;
    }

    for(int i=0;i<n;++i){
        std::cin>>t;
        c.push_back(t);
    }

    std::sort(c.begin(), c.end());
    std::vector<int> cStart(c.begin(), c.end()-1);
    std::vector<int> cEnd(c.begin()+1, c.end());

    upper = std::min(abs(a - cStart[0]) + abs(cStart[0] - cStart[n-2]),
                    abs(a - cStart[n-2]) + abs(cStart[n-2] - cStart[0]));
    lower = std::min(abs(a - cEnd[0]) + abs(cEnd[0] - cEnd[n-2]),
                    abs(a - cEnd[n-2]) + abs(cEnd[n-2] - cEnd[0]));
    next = std::min(upper, lower);
    std::cout<<next;
}