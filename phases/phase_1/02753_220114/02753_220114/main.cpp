//
//  main.cpp
//  02753_220114
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int year;
    
    cin >> year;
    
    if(year % 4 == 0){
        if(year % 100 != 0 || year % 400 == 0){
            cout << "1\n";
        }
        else cout << "0\n";
    }else cout << "0\n";
    return 0;
}
