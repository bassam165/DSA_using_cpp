class Solution {
public:
    int search(vector<int>& a, int tar) {
        int st = 0, end = a.size() - 1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(tar == a[mid]) return mid;

            if(a[st] <= a[mid]){ // left portion is sorted
                if(a[st] <= tar && tar <= a[mid]){ 
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            }
            else{ // right portion is sorted
                if(a[mid] <= tar && tar <= a[end]){ 
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }  
            }
        }
        return -1;
    }
};
