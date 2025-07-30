//02 - Container With Most Water(Optimal Approach)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int>height)
    {
        int left = 0;
        int right = height.size()-1;
        int max_Area = 0;

        while(left < right)
        {
            int heights = min(height[left] ,height[right]);

            int width = right - left;

            int area = heights * width;

            max_Area = max(max_Area ,area);
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max_Area;
    }
};

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    Solution sol;
    int maxWater = sol.maxArea(height);

    cout << "Maximum water that can be contained: " << maxWater << endl;
}
