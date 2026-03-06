//
//  main.cpp
//  02675_220122_repeatString
//
//  Created by Yongbean Chung on 2022/01/22.
//

/* //method 1 using string.h header
#include <iostream>
#include <string.h>

using namespace std;
int main(int argc, const char * argv[]) {
    int num1, num2;
    char word[1000][20];
    
    cin >> num1;
    
    for(int i = 0; i < num1; i++){
        cin >> num2 >> word[i];
        for(int j = 0; j < strlen(word[i]); j++){
            for(int k = 0; k < num2; k++){
                cout << word[i][j];
            }
        }
        cout << "\n";
    }
    return 0;
}
*/
//method 2 using string header
#include <iostream>
#include <string>

using namespace std;

int main(){
    int num1, num2;
    string word;
    
    cin >> num1;
    
    for(int i = 0; i < num1; i++){
        cin >> num2 >> word;
        for (int j = 0; j < word.length(); j++){
            for(int k = 0; k < num2; k++){
                cout << word[j];
            }
        }
        cout << endl;
    }
    return 0;
}
