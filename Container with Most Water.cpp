class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0 , r = height.size()-1, s = 0;
        while(l<r){
            int w = r - l;
            s = max(s, w*min(height[l], height[r]));
            if(height[l]<height[r]) l++;
            else r--;
        }
        return s;
    }
};

/*
  最笨的方法是：固定一个下标，然后移动另一个下标，枚举面积。平方复杂度。

  注意：当h[l]<h[r]时，如果l++，相当于少计算了：h[l]与h[r-1],h[r-2]...h[l+1]围成的桶的大小。
  不计算这些面积的前提是他们一定不是最大的（比当前已知的最大值小）。这是显然的，因为
  被排除掉的这些水桶的有效高不会比h[l]大（木桶的短板原理），因为如果h[r-1]比h[l]高，那么
  有效高就是h[l]，否则就是比h[l]更小的h[r]。

  因此，每次总是可以用这个方法排除掉许多不必要的计算。这个方法主要就靠短板原理。
*/
