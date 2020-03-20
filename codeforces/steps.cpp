#include <iostream>
#include <algorithm>

main()
{
    int n,count=1,max=1;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

    for(int i=0;i<(n-1);i++){
        if(arr[i]<=arr[i+1]){
            count++;
        }
        else{
            max=std::max(max,count);
            count=1;
        }
    }
    max=std::max(max,count);
    std::cout<<max;
}