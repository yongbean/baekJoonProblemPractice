# IO_and_BODMAS

## default coding

```c++
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

```

## A/B

```c++
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
```
```c++
std::cout.precision(12);
``` 
Max places to return.
```c++ 
std::cout << std::fixed;
``` 

Set as presision number to be a fixed decimal places.

## 곱셈

```
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b, sum = 0;
    
    cin >> a >> b;
    
    cout << a * (b % 10) << "\n";
    sum += a * (b % 10);
    b /= 10;
    
    cout << a * (b % 10) << "\n";
    sum += a * (b % 10) * 10;
    b /= 10;
    
    cout << a * (b % 10) << "\n";
    sum += a * (b % 10) * 100;
    
    cout << sum << "\n";
    
    return 0;
}
```

