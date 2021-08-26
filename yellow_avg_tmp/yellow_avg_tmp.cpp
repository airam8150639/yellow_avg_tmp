#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N < 0) {
        cout << '0' << endl;
        return 0;
    }
    vector<int> tmp(N);
    int64_t sum = 0;

    for (auto& t : tmp) {
        cin >> t;
        sum += t;
    }

    int64_t avg = (N > 0) ? sum / static_cast<int64_t>(tmp.size()) : 0;

    int K = 0;
    vector<int> result;
    for (int i = 0; i < static_cast<int>(tmp.size()); ++i) {
        if (tmp[i] > static_cast<int>(avg)) {
            ++K;
            result.push_back(i);
        }
    }

    cout << K << endl;
    for (auto r : result) cout << r << ' ';

    return 0;
}
