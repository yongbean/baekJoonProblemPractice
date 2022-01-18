# 1DArray

## MinAndMax

### sorting

```c++
sort(list, list + N);
```
this function sorts array from min to max number.

또한 주어지는 조건 잘 확인하기
___
## 숫자의 개수

I used switch to filter out the numbers for multiplied number.

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
to reduce the process
