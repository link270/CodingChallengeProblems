#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n, total=0, t=0;
    std::cin>>n;
    std::vector<int> arr(n);
    for (int i=0;i<n;++i) {
        std::cin>>arr[i];
    }

    for (int j=n-1;j>=0;--j) {
        if (t) --t;
        else++total;
        t = std::max(t, arr[j]);
    }
    std::cout << total;
}