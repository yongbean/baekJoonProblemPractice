//
//  main.cpp
//  10871_220116_smallerThanX
//
//  Created by Yongbean Chung on 2022/01/17.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int totalNum, num, currentNum;
    
    cin >> totalNum >> num;
    
    for(int i = 0; i < totalNum; i++) {
        cin >> currentNum;
        if(currentNum < num) {
            cout << currentNum << "\n";
        }
    }
    
    return 0;
}
