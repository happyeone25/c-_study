#include <iostream>
using namespace std;

int main() {
    struct MyStruct {
        string name;
        string position;
        int height;
        int weight;
    };
    /* MyStruct A = {
        "son",
        "Striker",
        183,
        77
    }; // 구조체 초기화
     cout << A.name << endl;
    cout << A.height << endl;
    cout << A.position << endl;
    cout << A.weight << endl;
    A.name = "son";
    A.height = 183.0;
    A.position = "Striker";
    A.weight = 77;
    

    B = {

    }; 
    cout << B.height << endl;
    
    */
    //구조체도 배열로 쓸 수 있음.
    MyStruct A [2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2} //첫번째 원소에 해당하는 인덱스 작성
    };
    //접근하는 방법
    cout << A[0].height << endl; //몇번째 인덱스에서 height 값을 불러오는 것
    return 0;
}