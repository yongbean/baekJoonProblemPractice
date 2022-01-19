//
//  main.cpp
//  02577_220118_numOfNum
//
//  Created by Yongbean Chung on 2022/01/18.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    //total num of each num
    int nums[10] = {0};
    
    int num1, num2, num3, calNum, onesDigit;
    
    //i)   get three nums
    cin >> num1 >> num2 >> num3;
    
    //ii)  mult three nums
    calNum = num1 * num2 * num3;
    
    //iii) use while loop until calNum == 0
    while(calNum > 0){
    //iv)  use modulus to get onesDigit
        onesDigit = calNum % 10;
    
    //v)   use switch add each of the onesDigit to the array accordingly
        
        nums[onesDigit]++;
        
        //iv와 v를 합칠 수 있다 --> nums[calNum % 10]++;
        
    //vi)  use / to remove onesDigit from calNum
        calNum /= 10;
    }
    //vii) print all array using for loop
    for(int i = 0; i < 10; i++){
        cout << nums[i] << "\n";
    }
    
    return 0;
}



//        switch(onesDigit){
//            case 0:
//                nums[0]++;
//                break;
//            case 1:
//                nums[1]++;
//                break;
//            case 2:
//                nums[2]++;
//                break;
//            case 3:
//                nums[3]++;
//                break;
//            case 4:
//                nums[4]++;
//                break;
//            case 5:
//                nums[5]++;
//                break;
//            case 6:
//                nums[6]++;
//                break;
//            case 7:
//                nums[7]++;
//                break;
//            case 8:
//                nums[8]++;
//                break;
//            case 9:
//                nums[9]++;
//                break;
//        }
