#include <iostream>

using namespace std;

int main() {
    int C; // 테스트케이스의 갯수
    cin >> C;

    int N; // 각 테스트케이스의 학생 수
    double percent; // 평균을 넘은 학생의 퍼센트 / 소수점
    for (int i = 0; i < C; i++)
    {
        cin >> N; // 테스트 케이스 학생 수 입력
        int score[N]; // 학생의 점수 배열 입력 / 정수
        double sum = 0; // 다음 테스트케이스로 돌아갈 때 초기화
        
        for (int i = 0; i < N; i++) // 학생 수만큼 점수 입력
        {
            cin >> score[i];
            sum += score[i];
        }

        double result = (sum / N);
        sum = 0;

        double count = 0;
        for (int i:score)
        {
            if(i > result){
                count++;
            }
        }
        cout << fixed;
        cout.precision(3);

        percent = (count / N) * 100;
        cout << percent << "%" << "\n";

    }
    
    return 0;
}