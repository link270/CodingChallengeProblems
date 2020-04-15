#include <iostream>
#include <string>

bool isPal(std::string s) 
{
    for(int i=0;i<s.size();++i){
        if(s[i]!=s[(s.size()-1)-i]) return false;
    }

    return true; 
}

int main(){
    std::string s;
    bool result;
    std::cin>>s;
    result=isPal(s) && isPal(s.substr(0,(s.size()-1)/2)) && isPal(s.substr((s.size()+2)/2, s.size()));
    std::cout<<(result?"Yes":"No");

    return 0;
}