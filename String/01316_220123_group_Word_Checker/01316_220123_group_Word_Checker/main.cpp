//
//  main.cpp
//  01316_220123_group_Word_Checker
//
//  Created by Yongbean Chung on 2022/01/23.
//

#include <iostream>
#include <string.h>
#define N 26
using namespace std;
int main(int argc, const char * argv[]) {
    char word[100];
    int num, count = 0, decide;
    
    cin >> num;
    for(int i = 0; i < num; i++){
        cin >> word;
        int alphabet[N] = {};
        decide = 0;
        for(int j = 0; j < strlen(word); j++){
            if(alphabet[word[j]-'a'] == 0){
                alphabet[word[j]-'a']++;
                decide = 0;
            }
            else if(alphabet[word[j]-'a'] == 1 && word[j-1] == word[j]){
                decide = 0;
            }
            else {
                decide = 1;
                break;
            }
        }
        if(decide == 0) count++;
    }
    cout << count;
    return 0;
}
