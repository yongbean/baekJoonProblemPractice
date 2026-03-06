//
//  main.cpp
//  01157_220122_studyingVocab
//
//  Created by Yongbean Chung on 2022/01/22.
//

#include <iostream>
#include <cctype>
#include <cstring>
#define N 26

using namespace std;

int main(int argc, const char * argv[]) {
    string word1, word2;
    int alphabet[N] = {0};
    int max = 0, place = 0, decide = 0;
    
    cin >> word1;
    
    for(int i = 0; i < word1.length(); i++){
        word2 += toupper(word1[i]);
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < word2.length(); j++){
            if((int)(word2[j]-'A') == i){
                alphabet[i]++;
            }
        }
    }
    for(int i = 0; i < N; i++){
        if(alphabet[i] > max){
            max = alphabet[i];
            place = i;
        }
    }
    for(int i = 0; i < N; i++){
        if(max == alphabet[i]){
            decide++;
        }
    }
    if(decide > 1){
        cout << "?";
    }
    else  cout << (char)(65+place);
    
    return 0;
}
