#include <iostream>

using namespace std;

int main() {
    int a,b,c;

    cin >> a >> b >> c;

    if(a <= 6 && b <= 6 && c <= 6){
        if(a == b && b == c){
            cout << 10000 + (a * 1000) << endl;
        }else if(a == b || a == c || b == c){
            if(a == b || a == c){
                cout << 1000 + (a * 100) << endl;
            }else{
                cout << 1000 + (b * 100) << endl;
            }
        }else{
            if(a > b){
                if(a > c){
                    cout << a * 100 << endl;
                }else{
                    cout << c * 100 << endl;
                }
            }else if(b > a){
                if(b > c){
                    cout << b * 100 << endl;
                }else{
                    cout << c * 100 << endl;
                }
            }else{
                cout << c * 100 << endl;
            }
        }
    }
    return 0;
}