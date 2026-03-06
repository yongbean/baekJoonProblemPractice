//
//  main.cpp
//  02292_220124_beehive
//
//  Created by Yongbean Chung on 2022/01/24.
//

#include <iostream>
using namespace std;
int main() {
    int N, i = 1, current = 1;
    
    cin >> N;
    
    if(N == 1){
        cout << i;
    }
    else{
        while(1){
            if(N > current && N <= current + i*6){
                cout << i+1;
                break;
            }
            else{
                current += i*6;
                i++;
            }
        }
    }
    return 0;
}
