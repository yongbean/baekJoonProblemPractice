//
//  main.cpp
//  02588_220114
//
//  Created by Yongbean Chung on 2022/01/14.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b, sum = 0, i = 0;
    
    cin >> a >> b;
    
    do{
        cout << a * (b % 10) << "\n";
        sum += a * (b % 10) * pow(10, i);
        b /= 10;
        i++;
    }
    while(b > 0);
    
    cout << sum << "\n";
    
    return 0;
}

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    int a,b, sum = 0;
//
//    cin >> a >> b;
//
//    cout << a * (b % 10) << "\n";
//    sum += a * (b % 10);
//    b /= 10;
//
//    cout << a * (b % 10) << "\n";
//    sum += a * (b % 10) * 10;
//    b /= 10;
//
//    cout << a * (b % 10) << "\n";
//    sum += a * (b % 10) * 100;
//
//    cout << sum << "\n";
//
//    return 0;
//}

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    int a,b, c, d, e;
//
//    cin >> a >> b;
//
//    c = a * (b % 10);
//
//    cout << c << "\n";
//
//    d = a * (b / 10 % 10);
//
//    cout << d << "\n";
//
//    e = a * (b / 100);
//
//    cout << e << "\n";
//
//    cout << c + (d * 10) + (e * 100) << "\n";
//
//    return 0;
//}
