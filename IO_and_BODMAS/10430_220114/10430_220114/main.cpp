//
//  main.cpp
//  10430_220114
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<(a+b)%c<<std::endl;
    std::cout<<((a%c) + (b%c))%c<<std::endl;
    std::cout<<(a*b)%c<<std::endl;
    std::cout<<((a%c) * (b%c))%c<<std::endl;
    
    return 0;
}
