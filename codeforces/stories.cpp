#include <iostream>
#include <algorithm>

int main()
{
    long long count,arr[100005],arr2[100005], arr3[100005],arr4[100005],kind,length,t;
    int m,n;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>arr3[i];
        arr4[i]=arr3[i];
    }
    std::sort(arr4,arr4+n);
    arr[0]=0;
    arr2[0]=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr3[i-1];
        arr2[i]=arr2[i-1]+arr4[i-1];
    }

    std::cin>>m;

    for(int i=0;i<m;i++)
    {
        count=0;
        std::cin>>kind>>length>>t;
        if(kind==1)count=arr[t]-arr[length-1];
        else count=arr2[t]-arr2[length-1];
        std::cout<<count<<std::endl;
    }

    return 0;
}