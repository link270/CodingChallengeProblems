#include <iostream>

int main(){
    std::string s, result="No";
    std::cin>>s;
    if(s.size()==6 && s[2]==s[3] && s[4]==s[5]){
        result="Yes";
    }
    std::cout<<result;
    return 0;
}