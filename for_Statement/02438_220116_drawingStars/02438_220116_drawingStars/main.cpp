//
//  main.cpp
//  02438_220116_drawingStars
//
//  Created by Yongbean Chung on 2022/01/17.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int num;
    
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}
