#include <iostream>
#include <algorithm>

int main(){
    int n, row=1, col=1;
    char x;
    std::cin >> n;
    int rows[n], cols[n];
 
    for(int i = 0 ; i < n ; i++) {
        rows[i]=-1;
        cols[i]=-1;
    }
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            std::cin>>x;
            if(x=='.') {
                rows[i]=j;
                cols[j]=i;
            } 
        }
    }
 
    for(int i=0;i<n;i++) {
        if(rows[i] == -1) {
            row=0;
        }
        if(cols[i] == -1) {
            col=0;
        }
    }
 
    if (row == 1 || col == 1) {
        if(row == 1) {
            for(int i = 0 ; i < n ; i++) {
                std::cout<< i+1 << " " << rows[i]+1 << std::endl;
            } 
        } else {
            for(int i = 0 ; i < n ; i++) {
                std::cout << cols[i]+1 <<" "<< i+1 << std::endl;
            }
        }
     } else { 
            std::cout<<"-1";
            return 0;
        }
}