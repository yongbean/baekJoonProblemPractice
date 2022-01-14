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
max places to return.
```c++ 
std::cout << std::fixed;
``` 
set as presision number to be a fixed decimal places.
