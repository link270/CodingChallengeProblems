#include <iostream>

int main() {
    int n,k;
    std::cin>>n>>k;
    int array[n+1]={0};
    for(int i=1;i<=n;i++){
        std::cin>>array[i];
    }
    int i=1, j=1, total = 0;
    for(i;i<=k;i++)
        total+=array[i];
    
    int result = j;
    int t= total;
    while(i<=n){
        t = t + array[i] - array[j];
        if(t < total){
            total = t;
            result = (j + 1);
        }
        j++;
        i++;
    }

    std::cout<<result;
}