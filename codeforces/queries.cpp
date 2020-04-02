#include <iostream>
#include <vector>
 
int main() {
    std::string sequence;
    int m, l, r, t;
    std::cin >> sequence >> m;
    std::vector<int> array(sequence.size(), 0);
    for (int i = 1; i < sequence.size(); ++i) {
        if(sequence[i - 1] == sequence[i]) t=1;
        else t=0;
        array[i]=array[i-1]+t;
    }

    for (int i = 0; i < m; ++i) {
        std::cin>>l>>r;
        std::cout<<array[r-1]-array[l-1]<<std::endl;
    }
}