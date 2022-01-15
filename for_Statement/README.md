# For_Statement

## 구구단

```c++
#include <iostream>
#define MAX 10
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int num;
    
    cin >> num;
    
    for(int i = 1; i < MAX; i++){
        cout << num << " * " << i << " = " << num * i << "\n";
    }
    return 0;
}
```

```c++
#define MAX 10
```
사용하여 코딩 내의 숫자 줄이기

___
