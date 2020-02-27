#include <iostream>
#include <algorithm>

int main(){
    int n, runningTotal=0, result=0;
    std::cin>>n;
    int people[n];
    for(int i=0;i<n;++i){
        std::cin>>people[i];
    }

    std::sort(people, people+n);

    for(int i=0;i<n;++i){
        if(runningTotal<=people[i]){
            result++;
            runningTotal+=people[i];
        }
    }

    std::cout<<result;
}