//
//  main.cpp
//  02562_220118_maxWithIndex
//
//  Created by Yongbean Chung on 2022/01/18.
//

#include <iostream>
#define N 9
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int list[N], count = 0, max = 0;
    
    for(int i = 0; i < N; i++){
        cin >> list[i];
        if(list[i] > max){
            max = list[i];
            count = i;
        }
    }
    
    cout << max << "\n" << count + 1 << "\n";
    
    return 0;
}
