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



