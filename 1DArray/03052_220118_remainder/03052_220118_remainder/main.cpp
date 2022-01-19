//
//  main.cpp
//  03052_220118_remainder
//
//  Created by Yongbean Chung on 2022/01/19.
//

#include <iostream>
#define N 42
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num, nums[N]={}, count = 0;
    //     (for loop for all)
    for(int i = 0; i < 10; i++){
    //i)   take input of total 10 (0 < num < --> ios_base::sync_with_stdio(false); cin.tie(NULL);
        cin >> num;
    //ii)  modulus 42 & put it in the array
        nums[num % 42]++;
    }
    //iii) count each element of array if it is greater than 0 == has the value
    for(int i = 0; i < N; i++){
        if(nums[i] > 0){
            count++;
        }
    }
    cout << count;
    return 0;
}
