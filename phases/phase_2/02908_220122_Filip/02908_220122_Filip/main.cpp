//
//  main.cpp
//  02908_220122_Filip
//
//  Created by Yongbean Chung on 2022/01/22.
//

#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    string x, y, larger;
    
    cin >> x >> y;
    
    for(int i = 2; i >= 0; i--){
        if(x[i] > y[i]){
            larger = x;
            break;
        }
        else if(x[i] < y[i]){
            larger = y;
            break;
        }
    }
    cout << larger[2] << larger[1] << larger[0];
    
    return 0;
}
