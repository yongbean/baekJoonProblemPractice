//
//  main.cpp
//  10818_220118_maxAndMin
//
//  Created by Yongbean Chung on 2022/01/18.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios_base::sync_with_stdio(0);
    
    int list[1000001];
    
    int N;// max = -1000000, min = 1000000, N;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> list[i];
    }
    
    sort(list, list + N);
    
    cout << list[0] << " " << list[N-1];
    
    return 0;
}
