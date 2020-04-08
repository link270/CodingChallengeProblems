#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n, q, t, total=0;
    std::vector<int> a, b;
    std::cin>>n>>q;
    for(int i=0;i<n;++i){
        std::cin>>t;
        a.push_back(t);
        total+=t;
    }
    
    int dead=0, j=0;
    b=a;
    for(int i=0;i<q;++i){
        std::cin>>t;
        while(t>0&&dead<n+1){
            if(t>=total || dead>=n || j>=n){
                dead=0;
                b=a;
                j=0;
                break;
            }
            
            if(t>=b[j]){
                dead++;
                t-=b[j];
            }
            else {
                t-=b[j];
                b[j]-=t;
            }

            ++j;
        }

        std::cout<<n-dead<<std::endl;
    }

    return 0;
}