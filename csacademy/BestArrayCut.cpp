#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int N, splitIndex = 0, halfSum;
    cin >> N;
    int arr[N], sums[N];
    for (int i=0;i<N;++i){
        cin >> arr[i];
    }
    
    partial_sum(arr, arr+N, sums);

    halfSum = sums[N-1]/2;

    for (int i=0;i<N;++i){
        if (sums[i] < halfSum && sums[i] >= sums[splitIndex]){
            splitIndex = i;
        }
        cout << endl << sums[i] << " " << sums[splitIndex] << " " <<halfSum << endl;
    }
    cout << abs(sums[splitIndex]-accumulate(arr+splitIndex+1,arr+N,0));

    //cout << endl << splitIndex << " " << sums[splitIndex] << endl;
    return 0;
}