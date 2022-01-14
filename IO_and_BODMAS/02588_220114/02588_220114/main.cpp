//
//  main.cpp
//  02588_220114
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b, c, d, e;
    
    cin >> a >> b;
    
    c = a * (b % 10);
    
    cout << c << "\n";
    
    d = a * (b / 10 % 10);
    
    cout << d << "\n";
    
    e = a * (b / 100);
    
    cout << e << "\n";
    
    cout << c + (d * 10) + (e * 100) << "\n";
    
    return 0;
}
