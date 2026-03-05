#include <iostream>
int main() {
    union Myunion {
        int intVal
        long longVal;
        float floatVal;
    };
    //한번에 하나의 데이터형만 저장할 수 있음. 이전에 저장했던 데이터값은 나중에 소실됨
    /
    MyUnion test;
    test.intval = 3;
    std :: cout << test.intVal << std::endl;
}

