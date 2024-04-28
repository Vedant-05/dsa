#include <bits/stdc++.h>
using namespace std;
void fourSum(vector<int>& nums, int target) 
{
    int n = nums.size();
    // sort the given array
    sort(nums.begin(), nums.end());
    // calculating the quadruplets
    for (int i = 0; i < n; i++) {
        // avoid the duplicates while moving i
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n; j++) {
            // avoid the duplicates while moving j
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            // 2 pointers
            int k = j + 1;
            int l = n - 1;
            while (k < l) {
                long long sum = nums[i] + nums[j] + nums[k] + nums[l];
                if (sum == target) {
                    cout << nums[i] << " " << nums[j] << " " << nums[k] << " " << nums[l] << endl;
                    k++;
                    l--;
                    // skip the duplicates
                    while (k < l && nums[k] == nums[k - 1]) k++;
                    while (k < l && nums[l] == nums[l + 1]) l--;
                } else if (sum < target) {
                    k++;
                } else {
                    l--;
                }
            }
        }
    }
}
// Driver code
int main()
{
    vector<int> arr = { 10, 20, 30, 40, 1, 2 }; 
    int X = 91; 
    fourSum(arr, X); 
    return 0;
}

// This code is contributed by adarshsharadpandey23
