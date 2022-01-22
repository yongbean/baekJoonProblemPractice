//
//  main.cpp
//  11720_220120_sumNums
//
//  Created by Yongbean Chung on 2022/01/20.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    char inputNum;
    int sum = 0;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> inputNum;
        sum += inputNum - 48;
    }
    
    cout << sum << endl;
    
    return 0;
}
