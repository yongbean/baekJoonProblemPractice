//
//  main.cpp
//  10818_220118_maxAndMin
//
//  Created by Yongbean Chung on 2022/01/18.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int list[10000];
    
    int max = -1000000, min = 1000000, N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> list[i];
    }
    
    sort(list, list + N);
    cout << min << " " << max << endl;
    
    return 0;
}
