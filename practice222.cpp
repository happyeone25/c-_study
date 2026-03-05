#include <iostream>
#include <vector>  //
using namespace std;
using std::vector; //이렇게 적는 게 좋다
//array는 크기가 고정되어 있어서 바꿀 수 없음
//가변 array -> vector : 원하는 값을 할당할 수 있고 그때그대 크기를 변화시킬 수 있음
//메모리를 증가시켜서 (더 큰)새로운 메모리로 이동시킨다->이동에 추가적인 에너지가 사용됨. 그리고 메모리의 값을 삭제하면 뒤에 있는 값들이 앞으로 넘어옴. 이동할 수 있고 추가 비용이 발생함.
//vector에서 제공되는 메서드가 더 많다
void display(const vector<int>& v) {
    for (const auto& at : v) {
        cout << at << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    v1.push_back(10)  // 뒤에 10이 붙으면서 크기가 알아서 1씩 늘어남. 
    vector<int> v1{1,2,3,4,5};  //malloc  data 포인터가 이 메모리를 가리키는 거임. capacity 5, size 5
    vector<int> v2(3);   //소괄호는 중괄호랑 다름. ->data size capacity 는 다 할당됨. 근데 이제 용량을 3개로 넘기고 capacity 3, 무조건 다 0으로 채워짐. size 3
    vector<int> v3{3};   // size가 1인 거 만들고 그 안에를 3으로 채우라.
    vector<int> v4(3,4);  // 첫번째 인수는 할당되는 메모리를 말함. 두번재 인수는 메모리를 2로 채워라. size 4
    display(v1);
    display(v2);
    display(v3);
    display(v4);
    return 0;
}