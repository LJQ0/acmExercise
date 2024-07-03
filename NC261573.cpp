#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num;
    cin >> num;
    vector<int> str(num);
    for (int i = 0; i < num; ++i) {
        int n;
        cin >> n;
        str[i] = n;
    }
    vector<int> bi(num - 1);
    for (int i = 0; i < num - 1; ++i) {
        bi[i] = str[i + 1] - str[i];
        if(bi[i] > 0) {
            if(i) {
                if(bi[i] >= bi[i - 1]) {
                    cout << "No";
                    return 0;
                }
            }
        }
        else {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}