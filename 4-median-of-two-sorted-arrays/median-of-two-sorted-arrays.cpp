class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            std::swap(nums1, nums2);
        }
        int suma = nums1.size() + nums2.size();
        int low = 0;
        int high = nums1.size();
        int left1;
        int left2;
        int right1;
        int right2;

        while(low <= high){
            
            int mid1 = (low+high) / 2;
            int mid2 = ((suma/2) - mid1) < 0 ? 0 : (suma/2) - mid1;

            left1 = mid1 <= 0 ? INT_MIN : nums1[mid1-1];
            left2 = mid2 <= 0 ? INT_MIN : nums2[mid2-1];
            right1 = mid1 >= nums1.size() ? INT_MAX : nums1[mid1];
            right2 = mid2 >= nums2.size() ? INT_MAX : nums2[mid2];
            
            if(left1 <= right2 && left2 <= right1){
                break;
            }else if(left1 > right2){
                high = mid1 - 1;
            }else{
                low = mid1 + 1;
            }

        }

        if(suma % 2 == 0){
            double izq = left1>left2 ? left1 : left2;
            double der = right1<right2 ? right1 : right2;
            return (izq+der)/2;
        }else{
            if(right1 < right2){
                return (double) right1;
            }else{
                return (double) right2;
            }
        }        
    }
};