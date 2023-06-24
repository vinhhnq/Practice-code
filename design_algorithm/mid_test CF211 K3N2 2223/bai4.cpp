#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> solve(int N, int K) {
    if (N == 1) {
        return {{K}};
    }
    vector<vector<int>> res;
    for (int xN = 0; xN <= K; xN++) {
        vector<vector<int>> subres = solve(N - 1, K - xN);
        for (int i = 0; i < subres.size(); i++) {
            subres[i].push_back(xN);
        }
        res.insert(res.end(), subres.begin(), subres.end());
    }
    sort(res.begin(), res.end(), greater<vector<int>>());
    return res;
}
int main() {
    int N, K;
    cin >> N >> K;
    vector<vector<int>> res = solve(N, K);
    for (const vector<int>& r : res) {
        for (int i : r) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}