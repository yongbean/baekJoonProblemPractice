//
//  main.cpp
//  10950_220115_addition
//
//  Created by Yongbean Chung on 2022/01/15.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int count, num[100][2];
    
    cin >> count;
    
    for(int i = 0; i < count; i++){
        cin >> num[i][0] >> num[i][1];
        cout << num[i][0] + num[i][1] << "\n";
    }
    for(int i = 0; i < count; i++){
        cout << num[i][0] + num[i][1] << "\n";
    }
    return 0;
}
