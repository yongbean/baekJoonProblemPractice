//
//  main.cpp
//  11022_220116_A+B_8
//
//  Created by Yongbean Chung on 2022/01/17.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int num, a, b;
    
    cin >> num;
    
    for(int i = 1; i <= num; i++) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
    }
    
    return 0;
}
