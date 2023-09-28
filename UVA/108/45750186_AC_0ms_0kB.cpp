#include <iostream>
#include <vector>

using namespace std;

int max_sub(const vector<int>& arr) {
    int max_ending_here = arr[0];
    int max_so_far = arr[0];

    for (int i = 1; i < arr.size(); ++i) {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }

    return max_so_far;
}

int max_subrectangle_sum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int max_sum = INT32_MIN;

    for (int left = 0; left < n; ++left) {
        vector<int> temp(n, 0);

        for (int right = left; right < n; ++right) {
            for (int i = 0; i < n; ++i) {
                temp[i] += matrix[i][right];
            }

            int current_sum = max_sub(temp);
            max_sum = max(max_sum, current_sum);
        }
    }

    return max_sum;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> matrix(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    int result = max_subrectangle_sum(matrix);
    cout << result << endl;

    return 0;
}