#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        // Sort the array
        sort(arr + l, arr + r + 1);
        
        // Return the kth smallest element
        return arr[l + k - 1];
    }
};

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int l = 0, r = n - 1;
    Solution obj;
    cout << "Kth smallest element is: " << obj.kthSmallest(arr, l, r, k) << endl;
    return 0;
}
