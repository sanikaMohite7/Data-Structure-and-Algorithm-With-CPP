//01 - Container With Most Water(Brute-Force Approach)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution
{
public:
    int maxArea(vector<int>height)
    {
        int max_Area = 0;
        int n = height.size();

        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int heights = min(height[i] ,height[j]);

                int width = j - i;

                int area = heights * width;

                max_Area = max(max_Area ,area);
            }
        }
        return max_Area;
    }
      
};

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    Solution sol ;

    int maxWater = sol.maxArea(height);

    cout << "Container with most water: " << maxWater << endl;
}