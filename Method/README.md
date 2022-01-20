# Method
## 정수 N개의 합
함수를 만들때 
```c++
long long sum(std::vector<int> &a);
```
이 내용을 사용하라고 했다.

이 함수 정의를 잘 보면, vector a라는 인자를 지닌 sum 함수인데 리턴을 long long type으로 해줘야 한다는 것이다.

즉, a라는 벡터에는 N개의 원소가 있어서 그 모든 원소를 더해 반환하라는 함수를 만들어야 한다.

인자에 vector가 들어 있기 때문에 header에 #include <vector>를 넣어줘야 한다.
___