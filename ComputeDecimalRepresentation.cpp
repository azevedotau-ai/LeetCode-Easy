#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        int permuta = 0;
        int fator = 1;

        while(n > 0){
            int digit = n % 10;

            if(digit > 0){
                ans.push_back(digit * fator);

            }
            n/=10;
            fator*=10;
        }

        reverse(ans.begin(), ans.end());
        return ans;

    }


};

int main(){
    Solution solutionTest;

    int valueTest = 537;
    vector<int> result = solutionTest.decimalRepresentation(valueTest);

    cout << "[ ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << "]" << endl;

    return 0;
}
