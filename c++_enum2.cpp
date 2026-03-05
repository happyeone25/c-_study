#include <iostream>
using namespace std;
int main() {
    //열거체(enum)
    //기호 상수를 만드느 것에 대한 또다른 방법

    enum spectrum {
        red, orange, yellow, green, bule, violet, indigo, ultraviolet
    };

    /*spectrum을 새로운  데이터형 이름으로 만듦
    red, orange, ... 0부터 7까지 정수 값을 각각 나타내는 기호 상수로 만든다. 인덱스처럼!
    */

    spectrum a = orange + yellow; // 열거자들끼리의 상수형은 안됨. 그러나 int형이면 됨
    cout << a << endl;

    int b;
    b = blue;
    b = blue + 3;
    cout << b << endl;  // 4+3=7
    //열거자들의 값을 초기화할 수도 있음. red = 0, orange = 2 이렇게. 무조건 정수로만 해야 함
    return 0;
}