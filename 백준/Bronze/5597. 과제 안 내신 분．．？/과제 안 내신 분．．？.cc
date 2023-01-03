#include <iostream>

using namespace std;

int main() {
    int T[30] = { 0, }; // 과제를 제출한 학생 체크 배열 0으로 초기화
    
    for (int i = 0; i < 28; i++) // 과제 제출한 학생 체크
    {
        int e;
        cin >> e;
        T[e - 1] = 1; // 과제를 제출한 학생 배열의 정수는 1로 변경
    }

    for (int i = 0; i < 30; i++)
    {
        if(T[i] == 0){ // 과제 미제출 학생 배열의 정수 0 체크
            cout << i + 1 << "\n";
        }
    }

    return 0;
}