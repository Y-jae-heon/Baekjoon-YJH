#include <iostream>

using namespace std;

int main() {
    int N; // 평균을 낼 과목의 갯수

    cin >> N; // 과목 갯수 입력

    int T[N]; // 과목갯수별 점수를 담기위한 배열 변수
    int score;
    double max = 0;
    double sum = 0;
    double result = 0;
    
    for (int i = 0; i < N; i++)
    {
        cin >> T[i]; // 과목 점수 입력
    }

    for (int i = 0; i < N; i++)
    {
        sum = sum + T[i];
        if(T[i] > max){
            max = T[i];
        }
    }

    result = ((sum / N) / max) * 100;
    cout << result << endl;
    
    return 0;
}