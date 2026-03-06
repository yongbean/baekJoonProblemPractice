//
//  main.cpp
//  04344_220119_moreThanAverage
//
//  Created by Yongbean Chung on 2022/01/19.
//

#include <iostream>
using namespace std;
void func();

int main(int argc, const char * argv[]) {
    // insert code here...
    int c;
    
    cin >> c;
    for(int i = 0; i < c; i++){
        func();
    }
    return 0;
}

void func(){
    int N;
    
    cin >> N;
    
    int *score = (int*)malloc(sizeof(int)* N);
    int sum = 0, decide = 0;
    double avg = 0, ratio = 0;
    
    for(int i = 0; i < N; i++){
        cin >> score[i];
        sum += score[i];
    }
    avg = (double)sum/N;
    
    for(int i = 0; i < N; i++){
        if(score[i] > avg){
            decide++;
        }
    }
    ratio = (double)decide/N*100;
    cout << fixed;
    cout.precision(3);
    cout << ratio << "%\n";
}
