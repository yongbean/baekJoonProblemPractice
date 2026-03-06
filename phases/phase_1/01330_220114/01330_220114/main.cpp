//
//  main.cpp
//  01330_220114
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a, b;
    
    cin >> a >> b;
    
    if(a > b){
        cout << ">\n";
    }
    else if(a < b){
        cout << "<\n";
    }
    else cout << "==\n";
    
    return 0;
}
