//
//  main.cpp
//  10809_220120_findAlphabet
//
//  Created by Yongbean Chung on 2022/01/20.
//


#include <iostream>
#include <string.h>
#define N 26
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int alphabet[N]={};
    char word[100];
    
    for(int i = 0; i < N; i++){
        alphabet[i] = -1;
    }
    cin >> word;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < strlen(word); j++){
            if(((int)(word[j]-'a') == i) && alphabet[i] == -1){
                alphabet[i] = j;
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        cout << alphabet[i] << " ";
    }
    
    return 0;
}


/*
#include <iostream>
#include <string.h>

using namespace std
;
int main(){
    char word[100];
    char alphabet[] = f
    int decide = 0;
    
    cin >> word;
    
    for(int i = 0; i < strlen(alphabet); i++){
        for(int j = 0; j < strlen(word); j++){
            if(alphabet[i] == word[j]){
                cout << j << " ";
                decide = 0;
                break;
            }
            else decide = 1;
        }
        if(decide == 1) cout << "-1 ";
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> word;
    
    for(int i = 0; i < alphabet.length(); i++){
        cout << (int)word.find(alphabet[i]) << " ";
    }
    return 0;
}
*/
