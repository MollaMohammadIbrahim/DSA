#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>
using namespace std;

int minSteps(int n) {
    queue<pair<int, int>> q; // Pair is (number, steps)
    unordered_set<int> visited;

    q.push({1, 0});
    visited.insert(1);

    while (!q.empty()) {
        int num = q.front().first;
        int steps = q.front().second;
        q.pop();

        if (num == n) {
            return steps;
        }

        if (num + 1 <= n && visited.find(num + 1) == visited.end()) {
            q.push({num + 1, steps + 1});
            visited.insert(num + 1);
        }

        if (num * 3 <= n && visited.find(num * 3) == visited.end()) {
            q.push({num * 3, steps + 1});
            visited.insert(num * 3);
        }
    }

    return -1; // If n is not reachable from 1
}

int main() {
    int n = 100000; // Change this to the desired value of n
    int steps = minSteps(n);

    if (steps != -1) {
        cout << "Minimum steps to reach " << n << " from 1: " << steps << endl;
    } else {
        cout << "Cannot reach " << n << " from 1." << endl;
    }

    return 0;
}
