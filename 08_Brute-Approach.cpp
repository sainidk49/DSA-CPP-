#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> &nums, int target)
{
    vector<int> ans;
    for (size_t i = 0; i < nums.size() - 1; i++)
    {
        for (size_t j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main()
{

    vector<int> nums = {2, 5, 7, 11, 13};
    int target = 18;

    vector<int> ans = pairSum(nums, target);

    cout << "index-" << ans[0] << ", " << "index-" << ans[1] << endl;
    return 0;
}