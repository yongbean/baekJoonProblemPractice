//
//  main.cpp
//  01110_220117_additionCycle
//
//  Created by Yongbean Chung on 2022/01/17.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int count = 0;
    int inputVal, newNum, addition;
    int tensDigit, onesDigit;
    
    //1. -> create 2 digit number
    do{
        cin >> inputVal;
    }
    //condition: input >= 0 && <= 99
    while(inputVal < 0 && inputVal > 99);

    //newNum == input
    newNum = inputVal;
    
//2. while condition for repeating until newly made number is same as input.
    while(1){
    //if -> val < 10
        if(newNum < 10){
            //tensDigit == 0
            //onesDigit == newNum
            tensDigit = 0;
            onesDigit = newNum;
            
        }
    //else tensDigit = newNum / 10, onesDigit = newNum % 10
        else {
            tensDigit = newNum / 10;
            onesDigit = newNum % 10;
        }
    
    //add tensDigit & onesDigit and join onesDigit with added number
        addition = tensDigit + onesDigit;
        addition = addition % 10;
        newNum = onesDigit * 10 + addition;
    //count++;
        count++;
    
    //if newNum == input, break (else continue)
        if(newNum == inputVal){
            break;
        }
    }
    cout << count;
    return 0;
}
