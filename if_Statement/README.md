# If_Statement

## 사분면 고르기

나의 코딩
```c++
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int x, y;
    
    cin >> x >> y;
    
    if(x > 0 && y > 0){
        cout << "1\n";
    }
    else if(x < 0 && y > 0){
        cout << "2\n";
    }
    else if(x < 0 && y < 0){
        cout << "3\n";
    }
    else cout << "4\n";
    
    return 0;
}
```

각 사분면에 focus를 맞추어 조건을 확인하게 했다.

하지만 x를 기준을 잡고 그 변수와 y의 변화에 따라 사분면을 지정할 수 있다.

즉
```c++
if (X > 0) { //x가 양수일 경우
 
        if (Y > 0) {
            cout << 1;
        } else {
            cout << 4;
        }
    }
    // X가 음수일 경우(2사분면 or 3사분면)
    else {
        if (Y > 0) {
            cout << 2;
        } else {
            cout << 3;
        }
    }
```
이 가능하다. 

또는 삼항연산자를 활용해
```c++
cout << (X > 0 ? (Y > 0 ? 1 : 4) : (Y > 0 ? 2 : 3));
```
이 가능하다.
