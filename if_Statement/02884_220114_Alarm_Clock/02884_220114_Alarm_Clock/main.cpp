//
//  main.cpp
//  02884_220114_Alarm_Clock
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int hr, min;
    
    cin >> hr >> min;
    
    if(min < 45){
        if(hr == 0){
            hr = 23;
            min = (60 - 45) + min;
        }
        else {
            hr--;
            min = (60 - 45) + min;
        }
    }
    else min = min - 45;
    
    cout << hr << " " << min << "\n";
    
    return 0;
}
