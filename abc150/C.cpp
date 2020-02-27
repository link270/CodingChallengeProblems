#include <iostream>

bool areEqual(int a[], int b[], int N){
  for(int i=0;i<N;++i){
    if(a[i]!=b[i]) return false;
  }
  return true;
}

int main(){
 int N, a, b, permutation = 1;
 std::cin>>N;
 int P[N], Q[N], T[N];
 for(int i=0;i<N;++i){
   std::cin>>P[i];
   T[i] = i+1;
 }

  for(int i=0;i<N;++i){
   std::cin>>Q[i];
 }

 if(areEqual(T, P, N)) a = permutation;
 if(areEqual(T, Q, N)) b = permutation;

while(std::next_permutation(T, T + N)){
  ++permutation;
   if(areEqual(T, P, N)) a = permutation;
   if(areEqual(T, Q, N)) b = permutation;
}

std::cout<<abs(a-b);
  return 0;
}
