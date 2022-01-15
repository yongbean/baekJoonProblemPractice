//
//  main.cpp
//  08393_220115_1ToN
//
//  Created by Yongbean Chung on 2022/01/15.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int num, sum = 0;
    
    cin >> num;
    
    for(int i = 1; i <= num; i++){
        sum += i;
    }
    
    cout << sum;
    
    return 0;
}
