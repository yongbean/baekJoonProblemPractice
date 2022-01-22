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


