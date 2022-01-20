# 1DArray

## MinAndMax

### sorting

```c++
sort(list, list + N);
```
this function sorts array from min to max number.

또한 주어지는 조건 잘 확인하기
<hr>

## 숫자의 개수

I used switch to filter out the numbers for multiplied number.

--> It is not necessary to use the switch as we can easily manipulate it with 
```c++
sums[calNum % 10]++;
```

However, it takes longer coding to code this problem.

We can make multiplied number into string and use for loop to look through each of the numbers:

```c++
string s = to_string(res);            // std::to_string(val) --> converts num into string

for (char ch : s) {		      // for each loop
		count[ch - '0']++;    // get the num of taken val
	}
  
for (int v : count) {                 // for each loop
		cout << v << "\n"; 
	}
```
even for this part, we can use:
```c++
ios_base::sync_with_stdio(false);
cin.tie(NULL);
``` 
___
## 평균

sort 함수를 사용할 때 
```c++
#include <algorithm>
```
위에 붙여야 한다.
___
## OX퀴즈

이 문제는 O를 연속으로 맞췄을 때 n+1형태로 늘어나서 마지막에 모두 더해 출력하는 형태의 문제이다.

string을 입력 받은 후, 하나의 character씩 확인을 해서 입력 받은 항이 'O'일 경우 count++을 한 뒤 sum에 더해준다.

character가 'X'인 경우, count를 0으로 바꿔준다.

마지막 character까지 왔다면 sum을 출력해준다.

string을 다룰 때 for each loop를 활용하는 것이 쉽고 빠르게 할 수 있다.

또한
```C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```
이것을 활용해 입출력을 묶을 수 있다.
___
## 평균은 넘겠지

### malloc 활용
이번 문제에는 동적 할당 (memory allocation)이 필요하다.

N의 값은 사용자에 의해 바뀔 수 있기 때문에 즉, array의 할당 데이터 사이즈가 사용자에 의해 바뀔 수 있기 때문에 malloc 및 calloc을 활용해 바꿀 수 있어야 한다.

즉 c와 같은
```c++
int* arr = (int*)malloc(sizeOf(int) * size);
```
이러한 코딩이 가능하며
```c++
int* arr = new int[size];
```
이러한 c++ 코딩도 가능하다.

malloc을 사용했을 경우, free(변수)를 사용해야 한다.

new 키워드를 사용했을 경우, delete[] 변수를 써줘야 한다.

### vector 활용
```c++
#include <vector>
```
사용하기
벡터 생성 :

```c++
vector<int> vec;
```
벡터의 맨 뒤로 다음 항 붙이기:

```c++
vec.push_back(value);
```
벡터의 경우 포인터를 사용하면 malloc과 new처럼 직접 지워주는 작업을 해야한다.
___

