//
//  main.cpp
//  09498_220114
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    
    cin >> a;
    
    if(a >= 90){
        cout << "A\n";
    }
    else if(a >= 80){
        cout << "B\n";
    }
    else if(a >= 70){
        cout << "C\n";
    }
    else if(a >= 60){
        cout << "D\n";
    }
    else cout << "F\n";
    
    return 0;
}
