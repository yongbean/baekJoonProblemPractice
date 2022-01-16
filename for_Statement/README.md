# For_Statement

## 구구단

```c++
#define MAX 10
```
사용하여 코딩 내의 숫자 줄이기
간단한 for loop 활용으로 코드 
___

## A+B

이 문제를 본 후 모든 입력 값을 받은 뒤 출력을 해야 한다고 생각했다. 
즉 모든 입력을 받기 위해 array를 활용해 data를 저장했다.

모든 data를 for 문을 활용해 저장한 뒤 다시 for 문을 이용해 출력을 하였다.

Stranger's Lab의 블로그에 의하면 
```c++
for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}
```
이런 식으로 입력을 받고 바로 출력을 해줄 수 도 있다.
___

## 빠른 A + B

```c++
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
```
