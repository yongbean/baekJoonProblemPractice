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
기존에 적혀있던 cout의 데이터들은 버퍼에 저장되어 있는데 cin이 들어오는 순간 버퍼에 있던 data들이 flush가 되어 프린트가 된다.

즉, 위와 같은 형태는 입출력이 묶여있기 때문에 가능한데, 그럴 경우
```c++
for (int i = 0; i < 10; i++) {
		cout << i << "번 째 입력\n";
		cin >> a;
	}
```
위와 같은 코딩에 경우는 출력을 버퍼에 보낸 후 cin을 만나 출력이 되며 a를 받게 된다.

하지만 tie값이 0/NULL일 경우

바로 버퍼의 값을 올려주는 것이 아니라 개행(줄바꿈)을 입력 받을 때까지 계속 입력을 받은 후 버퍼에 있는 값을 한번에 출력해준다.

## A + B - 4
1.
```c++
    while(!(cin >> a >> b).eof()){
```
2.
```c++
while (cin >> a >> b) {
```
3.
```c++
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int a, b;
	while (cin >> a >> b) {
		cout << a + b << "\n";
	}
 ```
 
 즉, while 문에서 바로 확인하는 방법이 있다.
 ```바로 
 ```
