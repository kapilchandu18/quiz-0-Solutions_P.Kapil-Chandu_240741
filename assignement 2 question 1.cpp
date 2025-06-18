int Solution::findCount(const vector<int> &P, int Q ) {
    int left=0,right=P.size()-1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (P[mid] == Q) {
            int count = 1; 
        int  left= mid - 1, right= mid + 1;
        while (left>=0 && P[left]==Q) {
            count++;
            left--;
        }
        while (right<P.size() && P[right]==Q) {
            count++;
            right++;
        }
        return count;
        } else if (P[mid] < Q) {
            left = mid+1;
        } else {
            right = mid-1;
        }
    }
    return 0;
        
    }