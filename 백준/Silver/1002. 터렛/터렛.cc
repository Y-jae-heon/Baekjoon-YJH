#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int num = 0; // 입력받을 좌표 변수
    int result = 0; // 류재명 위치 변수
    int x1,y1,r1,x2,y2,r2 = 0; // 조규현의 좌표 x1,y1 / 백승환의 좌표 x2,y2 
    // 류재명의 거리 r1(조규현) ,r2(백승환)
    double sum = 0; // 중심좌표

    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        sum = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        
        if(x1 == x2 && y1 == y2 && r1 == r2)
            result = -1; // 무한대로 만나버림
        else if (abs(r1 - r2) < sum && r1 + r2 > sum)
            result =2; // 두 점에서 만남
        else if (r1 + r2 == sum)
        	result = 1; // 외접하므로 한점에서 만난다.
		else if (abs(r1 - r2) == sum)
			result = 1; // 내접하므로 한점에서 만난다.
		else if (r1 + r2 < sum)
			result = 0; // 두 반지름의 합이 sum보다 짦기에 만나지 않는다.
		else if (abs(r1 - r2) > sum)
			result = 0; // 두 반지름의 차가 sum보다 길기에 만나지 않는다.

		cout << result << endl;
    }

}