#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, result = 0, tempResult = 1;
    bool found = false;
    cin >> N;
    vector<string> words;
    string temp, word;
    for (int i=0;i<N;++i){
        cin >> temp;
        sort(temp.begin(), temp.end());
        words.push_back(temp);
    }
    
    sort(words.begin(), words.end());
    
    while (!words.empty()){
        word = words.back();
        words.pop_back();
        if (word == words.back() && !words.empty()){
            tempResult++;
        }else {
            if (tempResult > result) result = tempResult;
            tempResult = 1;
        }
    }
    
    if (tempResult > result){
        result = tempResult;
        tempResult = 1;
    }
    
    // while (i < words.size()){
    //     while (words[i] == words[i+1]){
    //         tempResult++;
    //         i++;
    //     }
    //     if (tempResult + 1 > result){
    //         result = tempResult + 1;
    //         tempResult = 0;
    //     }
    //     ++i;
    // }
    
    cout << result;
    return 0;
}