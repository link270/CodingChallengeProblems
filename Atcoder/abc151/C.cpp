#include <iostream>
#include <vector>
 
int main(){
  int N, M, correct = 0, penalties = 0;
  std::cin>>N>>M;
  std::vector<int> P, penalty(N+1, 0);
  std::vector<std::string> S, R(N+1, "");

  for(int i=0;i<M;++i){
    int a;
    std::string b;
      std::cin>>a>>b;
      P.push_back(a);
      S.push_back(b);
      if(R.at(P.at(i)) != "AC"){
        if(S.at(i) == "AC"){
          R.at(P.at(i)) = "AC";
          ++correct;
          penalties += penalty.at(P.at(i));
        } else {
          ++penalty.at(P.at(i));
        }
      }
  }

  std::cout<<correct<<" "<<penalties;
  return 0;
}
