# String

## 3. 알파벳 찾기

이 문제를 보면 입력을 받은 후 알파벳의 위치를 저장 후 각 알파벳의 존재 유무와 존재 한다면 위치를 출력한다는 것
```c++
if(((int)(word[j]-'a') == i) && alphabet[i] == -1){
      alphabet[i] = j;
}
```
위와 같이 알페벳이 존제하고 처음 나온 알파벳이면 단어 안에 있는 알파벳의 위치를 배열에 저장해준다.

하지만 위와 같은 코딩은 틀렸다고 나온다.

다음은 베열을 활용해 푼 방법이다.
```c++
int main(){
    char word[100];
    char alphabet[] = f
    int decide = 0;
    
    cin >> word;
    
    for(int i = 0; i < strlen(alphabet); i++){
        for(int j = 0; j < strlen(word); j++){
            if(alphabet[i] == word[j]){
                cout << j << " ";
                decide = 0;
                break;
            }
            else decide = 1;
        }
        if(decide == 1) cout << "-1 ";
    }
    return 0;
}
```

strlen을 활용해 길이를 가져오고 boolean과 같은 0 과 1을 decide에 줘서 존재 유무를 찾아 print해준다.

다음은 c++에 있는 string 헤더를 활용한 코딩이다.

```c++
#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> word;
    
    for(int i = 0; i < alphabet.length(); i++){
        cout << (int)word.find(alphabet[i]) << " ";
    }
    return 0;
}
```
이 코딩은 .length()와 .find()를 통해 단어의 길이와 위치를 찾을 수 있다. JAVA와 같은 원리라고 생각하면 좋을 것 같다.
___

## 6. 단어의 개수

```c++
cin.getline(sentence, N);
```
또는
```c++
fgets(sentence, sizeof(sentence, stdin);
```
사용하여 input받기
___
## 8. 다이얼
이 문제를 풀 때 나는 switch 문을 사용했다.

switch 문과 if 문의 사용 용도는 비슷하기 때문에 괜찮을 것 같았기 때문이다.

하지만 condition을 활용해 if문으로 사용하는 것이 속도면에서 더 빠른 것 같다.

왜냐하면 if문을 상용하면 case수, 즉 for문을 돌리면서 확인해야하는 경우의 수가 줄기 때문에 이 문제는 if문을 사용하는 것이 좀 더 효과적인 것 같다.
___
