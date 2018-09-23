#include <iostream>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string ret;
        int temp1;
        while (n > 0) {
            temp1 = (n - 1) % 26;
            char ch = 'A' + temp1;
            ret.insert(ret.begin(), ch);
            n -= (n - 1) % 26;
            n /= 26;
        }
        return ret;
    }
};

int main() {
    Solution solution;
    int a = 701;
    cout << solution.convertToTitle(a) << endl;
    return 0;
}