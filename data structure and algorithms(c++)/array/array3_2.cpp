//majority eliment
//brute forse approach
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2};

    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int freq = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                freq++;
            }
        }

        if (freq > n / 2) {
            cout << "Majority Element: " << nums[i] << endl;
            return 0;
        }
    }

    cout << "No Majority Element Found" << endl;

    return 0;
}

//optimed
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2};

    int n = nums.size();

    sort(nums.begin(), nums.end());

    int freq = 1;
    int ans = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2) {
            cout << "Majority Element: " << ans << endl;
            return 0;
        }
    }

    cout << "No Majority Element Found" << endl;
    return 0;
}

//moores voating algorithm
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int freq = 0;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (freq == 0) {
            ans = nums[i];
        }

        if (ans == nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2};

    cout << "Majority Element: " << majorityElement(nums) << endl;

    return 0;
}