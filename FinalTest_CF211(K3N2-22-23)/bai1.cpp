#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, int> box1, pair<int,int> box2) {
    return box1.second > box2.second;
}
int maximizeBalls(int N, int M, vector<pair<int,int>>& boxes) {
    sort(boxes.begin(), boxes.end(), compare);
    int totalBalls = 0;
    int remainingBoxes = N;
    for (auto box : boxes) {
        if (remainingBoxes >= box.first) {
            totalBalls += box.first * box.second;
            remainingBoxes -= box.first;
        }
        else {
            totalBalls += remainingBoxes * box.second;
            break;
        }
    }
    return totalBalls;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> boxes;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        boxes.push_back(make_pair(a, b));
    }
    int result = maximizeBalls(n, m, boxes);
    cout << result << endl;
    return 0;
}