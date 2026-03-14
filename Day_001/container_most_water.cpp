class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();

        int left =0;
        int right = n-1;

        int max = INT_MIN;

        while(left!=right){

        int area = min(height[right] , height[left]) * (right - left);

        if ( area > max) max = area;

        // move the min height

        else if (min(height[left] , height[right]) == (height[left])){ // left is min

        left++;

        }

        else right--;

    
        }

        return max;
    }
};