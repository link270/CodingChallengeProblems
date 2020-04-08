#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
 
int main()
{
    int n,m;
    std::string s, t;
    std::vector<int> arr[26];
    std::cin>>n>>s>>m;
    for(int i=0; i<n;i++){
        arr[s[i]-'a'].push_back(i+1);
    }
 
    for(int i=0;i<m;i++){
        int count[26]={}, result=-1;
        std::cin>>t;
        for(int j=0; j<t.length(); j++){
            result=std::max(result,arr[t[j]-'a'][count[t[j]-'a']]);
            count[t[j]-'a']++;
        }
 
        std::cout<<result<<std::endl;
    }

    return 0;
}