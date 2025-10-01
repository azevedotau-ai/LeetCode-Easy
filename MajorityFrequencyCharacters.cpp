#include <algorithm>
#include <string>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
   public:
    string majorityFrequencyCharacters(string caractInput) {
        unordered_map<char, int> mapFreq;
        vector<pair<int, char>> items;
        int best = -1;
        string ans;

        for (char c : caractInput) mapFreq[c]++;

        for (auto &p: mapFreq) {
            items.push_back(make_pair(p.second, p.first));
        }

        sort(items.begin(), items.end(), [](auto &a, auto &b) {
            return a.first < b.first;
        });

        unordered_map<int, string> freqGrupo;
        for (auto &p: items) {
            freqGrupo[p.first].push_back(p.second);
        }


        for (auto &entry: freqGrupo) {
            int coutChars = entry.second.size();

            if (coutChars > best) {
                best = coutChars;
                ans = entry.second;
            }
        }

        return ans;

    }
};

int main() {
    Solution solutionTest;
    cout << solutionTest.majorityFrequencyCharacters("abababacde") << endl;
    return 0;
}