//
//  main.cpp
//  02941_220123_LJESNJAK
//
//  Created by Yongbean Chung on 2022/01/23.
//

#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    string word;
    int count = 0;
    
    cin >> word;
    
    for(int i = 0; i < word.length(); i++){
        if(word[i] == 'c'){
            if(word[i+1] == '='){
                count++;
                i++;
            }
            else if(word[i+1] == '-'){
                count++;
                i++;
            }
            else count++;
        }
        else if(word[i] == 'd'){
            if(word[i+1] == 'z' && word[i+2] == '='){
                count++;
                i+=2;
            }
            else if(word[i+1] == '-'){
                count++;
                i++;
            }
            else count++;
        }
        else if(word[i] == 'l' && word[i+1] == 'j'){
            count++;
            i++;
        }
        else if(word[i] == 'n' && word[i+1] == 'j'){
            count++;
            i++;
        }
        else if(word[i] == 's' && word[i+1] == '='){
            count++;
            i++;
        }
        else if(word[i] == 'z' && word[i+1] == '='){
            count++;
            i++;
        }
        else count++;
    }
    cout << count << endl;
    return 0;
}
//여기에 나오는 문자면 [i+1]또한 읽어서 맞으면 i++를 따로 해줘서 넘어간다.

