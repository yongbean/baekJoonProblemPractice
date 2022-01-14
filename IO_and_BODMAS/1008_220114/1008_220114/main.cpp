//
//  main.cpp
//  1008_220114
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    double a,b;
    std::cin>>a>>b;
    
    std::cout.precision(12);
    std::cout << std::fixed;
    std::cout<<a/b<<std::endl;
    return 0;
}
