#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

vector<int> findmissingandduplicate(vector<vector<int>> &grid) {
    int n = grid.size();
    int a, b;
    vector<int> ans;
    int expsum = 0, actualsum = 0;
    unordered_set<int> s;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int val = grid[i][j];
            actualsum += val;
            if(s.find(val) != s.end()) {
                a = val;
                ans.push_back(a);
            }
            s.insert(val);
        }
    }

    expsum = (n * n) * (n * n + 1) / 2;
    b = expsum + a - actualsum;
    ans.push_back(b);
    return ans;
}

int main() {
    vector<vector<int>> grid = {
        {1, 2},
        {2, 4}
    };

    vector<int> result = findmissingandduplicate(grid);

    cout << "Duplicate: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;

    return 0;
}
