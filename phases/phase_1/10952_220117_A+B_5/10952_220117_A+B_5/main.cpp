//
//  main.cpp
//  10952_220117_A+B_5
//
//  Created by Yongbean Chung on 2022/01/17.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a, b;
    
    while(1){
        cin >> a >> b;
        if(a ==0 && b ==0){
            break;
        }
        else cout << a + b <<"\n";
    }
    
    return 0;
}
