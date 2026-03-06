//
//  main.cpp
//  05622_220123_dial
//
//  Created by Yongbean Chung on 2022/01/23.
//

#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    string word;
    int count = 0;
    
    cin >>word;
    
    for(int i = 0; i < word.length(); i++){
        switch(word[i]){
            case 'A': case 'B': case 'C':
                count += 2;
                break;
            case 'D': case 'E': case 'F':
                count += 3;
                break;
            case 'G': case 'H': case 'I':
                count += 4;
                break;
            case 'J': case 'K': case 'L':
                count += 5;
                break;
            case 'M': case 'N': case 'O':
                count += 6;
                break;
            case 'P': case 'Q': case 'R': case 'S':
                count += 7;
                break;
            case 'T': case 'U': case 'V':
                count += 8;
                break;
            case 'W': case 'X': case 'Y': case 'Z':
                count += 9;
                break;
        }
        count++;
    }
    cout << count << endl;
    
    return 0;
}
