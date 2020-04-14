#include <iostream>
#include <string>
#include <vector>

int main(){
    long long n, k, substringLength=0, result=0;
    char t;
    std::vector<bool> letters (26, false);
    std::string s;
    std::cin>>n>>k>>s;
    for(int i=0;i<k;++i){
        std::cin>>t;
        letters[t-'a']=true;
    }

    for(int i=0;i<n;++i){
        if(letters[s[i]-'a']) substringLength++;
        else if (substringLength>0){
            result+=substringLength*(substringLength+1)/2;
            substringLength=0;
        }
    }

    if(substringLength>0) result+=substringLength*(substringLength+1)/2;

    std::cout<<result;

    return 0;
}