//
//  main.cpp
//  01065_220120_ArithmeticalNumber
//
//  Created by Yongbean Chung on 2022/01/20.
//

#include <iostream>
using namespace std;

int hanNum(int);

int main(int argc, const char * argv[]) {
    
    int N, count = 0;
    
    cin >> N;
    
    count = hanNum(N);
    
    cout << count;
    
    return 0;
}

int hanNum (int num) {
    int count = 0;
    
    //i)   if less than 100
            // return count += num;
    if(num < 100){
        count = num;
    }
    else{
    //ii)  for loop from 100 to num //=> right before loop, count = 99;
        count = 99;
        for(int i = 100; i <= num; i++){
    //iii) take onesDigit and tensDigit -> take difference --> dif1
    //iv)  divide input current num
    //v)   repeat iii) and set difference as dif2
    //vi)  if dif1 == dif2 --> count++;
            if((i%10 - i/10%10) == (i/10%10 - i/100)){
                count++;
            }
        }
    }
    return count;
}
