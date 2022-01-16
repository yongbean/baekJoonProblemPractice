//
//  main.cpp
//  15552_220116
//
//  Created by Yongbean Chung on 2022/01/16.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int count, a, b;
    
    cin >> count;
    
    for(int i = 0; i < count; i++){
        cin >> a >> b;
        cout << a + b << '\n';
    }
    for(int i = 0; i < count; i++){
    }
    return 0;
}
