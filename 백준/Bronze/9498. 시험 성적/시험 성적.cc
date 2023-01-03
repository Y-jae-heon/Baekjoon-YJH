#include <iostream>

using namespace std;

int main() {
    int a;

    cin >> a;

    if(a >= 90 && a <= 100){
        cout << "A";
        return 0;
    }else if(a >= 80 && a <= 89){
        cout << "B";
        return 0;
    }else if(a >=70 && a <= 79){
        cout << "C";
        return 0;
    }else if(a >=60 && a <= 69){
        cout << "D";
        return 0;
    }else{
        cout << "F";
        return 0;
    }
}