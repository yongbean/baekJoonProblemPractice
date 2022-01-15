//
//  main.cpp
//  02739_220115_Mult_Table
//
//  Created by Yongbean Chung on 2022/01/15.
//

#include <iostream>
#define MAX 10
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    
    cin >> num;
    
    for(int i = 1; i < MAX; i++){
        cout << num << " * " << i << " = " << num * i << "\n";
    }
    return 0;
}
