//
//  main.cpp
//  01152_220122_numOfWords
//
//  Created by Yongbean Chung on 2022/01/22.
//

#include <iostream>
#include <string.h>
#define N 1000000
using namespace std;

int main(int argc, const char * argv[]) {
    char sentence[N];
    int wordCount = 0;
    cin.getline(sentence, N);
    if(sentence[0] != ' ') wordCount++;
    for(int i = 1; i < strlen(sentence); i++){
        if(sentence[i] != ' ' && sentence[i-1] == ' '){
            wordCount++;
        }
    }
    cout << wordCount;
    return 0;
}
