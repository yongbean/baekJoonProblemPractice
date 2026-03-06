//
//  main.cpp
//  02439_220116_drawingStars2
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
        for(int j = 0; j < num; j++) {
            if(j >= (num-i-1)){
                cout << "*";
            }
            else cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
