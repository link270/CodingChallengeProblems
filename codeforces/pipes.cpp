#include <iostream>
#include <vector>
#include <sstream>
 
int main() {
    int q, n;
    std::cin>>q;
    std::stringstream result;
    while (q--) {
        std::vector<std::string> array(2);
        std::cin>>n>>array[0]>>array[1];
        int r=0, c=0, t=0;
        while (c<array[0].size()) {
            if (array[r][c]<'3') {
                if (t)
                    c=array[0].size();
                ++c;
            }
            else {
                if (t) {
                    t=0;
                    ++c;
                }
                else {
                    t=1;
                    r=(r+1)%2;
                }
            }
        }

        if(r&&c==array[0].size()){
            result<<"YES\n";
        } else {
            result<<"NO\n";
        }
    }

    std::cout<<result.str();
}