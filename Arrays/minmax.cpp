#include <iostream>
#include <utility> // for pair
#include <limits>  // for numeric_limits

using namespace std;

class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // Initialize min and max to the first element of the array
        long long minNum = numeric_limits<long long>::max();
        long long maxNum = numeric_limits<long long>::min();
        
        // Traverse the array to find min and max
        for (int i = 0; i < n; i++) {
            if (a[i] < minNum) {
                minNum = a[i]; // Update min if current element is smaller
            }
            if (a[i] > maxNum) {
                maxNum = a[i]; // Update max if current element is larger
            }
        }
        
        // Return the pair containing min and max
        return make_pair(minNum, maxNum);
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    long long arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    pair<long long, long long> result = solution.getMinMax(arr, n);
    cout << "Minimum element: " << result.first << endl;
    cout << "Maximum element: " << result.second << endl;
    return 0;
}
