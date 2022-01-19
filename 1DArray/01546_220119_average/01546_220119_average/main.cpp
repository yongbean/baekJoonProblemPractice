//
//  main.cpp
//  01546_220119_average
//
//  Created by Yongbean Chung on 2022/01/19.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int N;
    double sum = 0;
    //i)   get input N & nums
    cin >> N;
    
    double num[N];
    
    for(int i = 0; i < N; i++){
        cin >> num[i];
    }
    
    //ii)  sort the numbers
    sort(num, num + N);
    //iii) get highest num & for loop for num[i] / num[N-1] * 100 --> save it to sum
    for(int i = 0; i < N; i++){
        sum += num[i] / num[N-1] * 100;
    }
    //get average
    cout << sum / N;
    
    
    
    return 0;
}
