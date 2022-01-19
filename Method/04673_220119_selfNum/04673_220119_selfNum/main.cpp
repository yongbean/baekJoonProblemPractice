//
//  main.cpp
//  04673_220119_selfNum
//
//  Created by Yongbean Chung on 2022/01/19.
//

#include <iostream>
using namespace std;
void selfNum(int);
int main(int argc, const char * argv[]) {
    // insert code here...
    
    for(int i = 1; i <= 10000; i++){
        selfNum(i);
    }
    
    return 0;
}
void selfNum(int num){
    int onesDigit;
    int currentNum;
    int sum;
    int decide = 0;
    for(int i = 1; i <= num; i++){
        sum = 0;
        currentNum = i;
        while(currentNum != 0){
            onesDigit = currentNum % 10;
            sum += onesDigit;
            currentNum /= 10;
        }
        sum += i;
        if(sum == num){
            decide++;
        }
    }
    if(decide == 0){
        cout << num << "\n";
    }
}
