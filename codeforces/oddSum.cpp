#include<iostream>

int main(){
    int q;
    std::cin>>q;
    for(int i=0;i<q;i++){
        int n,k,s=0,sum=0;
        std::cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;++i){
            std::cin>>arr[i];
            if(arr[i]%2!=0) ++s;
        }

        if(s>=k && (s-k)%2==0){
            std::cout<<"YES"<<std::endl;
            int t=0;
            if(k==1) std::cout<<n<<std::endl;
            else{
                for(int j=1;j<=n;++j){
                    sum+=arr[j-1];
                    if(sum%2!=0){
                        ++t;
                        sum=0;
                        std::cout<<j<<" ";
                        if(t==k-1)break;
                    }
                }
                if(k>1)std::cout<<n<<std::endl;
                else std::cout<<std::endl;
            }
        } else std::cout<<"NO"<<std::endl;
    }
    return 0;
}