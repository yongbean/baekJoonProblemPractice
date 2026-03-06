//
//  main.cpp
//  15596_220119_sumOfNNums
//
//  Created by Yongbean Chung on 2022/01/19.
//

#include <iostream>
#include <vector>
long long sum(std::vector<int> &a);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

long long sum(std::vector<int> &a){
    long long ans = 0;
    for(int i = 0; i < a.size(); i++){
        ans += a[i];
    }
    return ans;
}
