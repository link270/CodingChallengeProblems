#include <iostream>

int main(){
  int n, result;
  for(int i = 0;i < 1;i++)
    result  = 0;
    std::cin>>n;
    for(int i = 2;i < n;i++)
      result += i * (i + 1);
    std::cout << result;
}