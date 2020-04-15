#include <iostream>

int main(){
  int N, result = 0;
  std::cin>>N;
  std::string S;
  std::cin>>S;

  for(int i=0;i<N;++i){
    if(S[i] == 'A' && S[i+1] == 'B' && S[i+2] == 'C'){
      ++result;
    }
  }

std::cout<<result;
  return 0;
}
