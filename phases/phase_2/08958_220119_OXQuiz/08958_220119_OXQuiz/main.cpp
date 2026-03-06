//
//  main.cpp
//  08958_220119_OXQuiz
//
//  Created by Yongbean Chung on 2022/01/19.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count, sum, N;
    
    cin >> N;
    string OX = "";

    for(int i = 0; i < N; i++){
        count = 0;
        sum = 0;
        cin >> OX;
        for(char decide: OX){
            if(decide == 'O'){
                count++;
                sum += count;
            }
            else if(decide == 'X'){
                count = 0;
            }
        }
        cout << sum << "\n";
    }
    
    return 0;
}
