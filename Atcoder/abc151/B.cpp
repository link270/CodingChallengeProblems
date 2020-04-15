#include <iostream>

int main(){
  int N, K, M;
  float sum;
  float avg = 0;
  int result;

  std::cin>>N>>K>>M;

  int A[N];
 
 for(int i=0;i<N-1;++i){
    std::cin>>A[i];
    sum += A[i];
  }

for (int i=0;i<=K;++i){
  avg = (sum + i) / N;
  if(avg >= M){
    result = i;
    break;
  }

  if(i>=K){
    result = -1;
  }
}

std::cout<<result;
return 0;
}
