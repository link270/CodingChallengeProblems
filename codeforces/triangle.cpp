#include <iostream>

int main(){
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  //cout.tie(NULL);
  //int count=1;
  for(ll i = 0;i < 1;i++)
    int n, result=0;
    std::cin>>n;
    for(ll i = 2;i < n;i++)
      result += i * (i + 1);
    std::cout << result;
}