#include <iostream>

long long Choose(long long a, long long b) 
{ 
    return (b*(b-1)/2+a*(a-1)/2); 
} 

int main(){
    long long n, a, pos=1, neg=0, t=1;
    std::cin>>n;
    for(int i=0;i<n;++i){
        std::cin>>a;
        if(a>0) a=1;
        else a=-1;
        if((t=t*a)==1) pos++;
        else neg++;

    }

    std::cout<<pos*neg<<" "<<Choose(pos, neg);

    return 0;
}