//
//  main.cpp
//  01712_220124_breakEvenPoint
//
//  Created by Yongbean Chung on 2022/01/24.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int A, B, C, count = 1;
    
    cin >> A >> B >> C;
    
    if(B >= C){
        cout << "-1\n";
    }
    else{
        count += A/(C-B);
        cout << count << endl;
    }
    return 0;
}
