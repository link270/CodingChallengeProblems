#include <iostream>
#include <algorithm>

int cut(int n,int a,int b,int c,int arr[]){
	if(n<0){
        return INT_MIN;
    }
    
	if(n==0){
        return 0;
    }

	if(arr[n]==-1){
        arr[n]=std::max(std::max(
        cut(n-a,a,b,c,arr)+1,
        cut(n-b,a,b,c,arr)+1),
        cut(n-c,a,b,c,arr)+1);
    }

	return arr[n];
}
 
int main(){
    int n,a,b,c,arr[4001],result=0;
    std::fill_n(arr,4001,-1);
	std::cin>>n>>a>>b>>c;

	for(int i=0;i<=4000;i++){
        arr[i]=-1;
    }
    result = cut(n,a,b,c,arr);

	std::cout<<result;
	return 0;
}