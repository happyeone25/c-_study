#include <iostream>
#include <vector> 
using namespace std;
using std::vector;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> v1;
    while (true) {
        int n;
        cin >> n;
        if (n == -1) break;
        v1.push_back(n);
    }
    
    for (int i=0; i<v1.size(); i++) {
        int sum = 0;
        vector<int> v2;
        for (int j=1 ; j<v1[i]; j++) {
            if (v1[i] % j == 0) {
                sum += j;
                v2.push_back(j);
            }
        }
        if (sum == v1[i]) {
            cout << v1[i] << " = ";
            for (int k=0; k < v2.size(); k++) {
                cout << v2[k];
                if (k < (int)v2.size()-1) {
                    cout << " + ";
                }
            }
            cout << "\n";
        }
        else {
            cout << v1[i] << " is NOT perfect." << "\n";
        }
    }
    return 0;
}