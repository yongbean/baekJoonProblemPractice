//
//  main.cpp
//  14681_220114_coordinate
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int x, y;
    
    cin >> x >> y;
    
    if(x > 0 && y > 0){
        cout << "1\n";
    }
    else if(x < 0 && y > 0){
        cout << "2\n";
    }
    else if(x < 0 && y < 0){
        cout << "3\n";
    }
    else cout << "4\n";
    
    return 0;
}
