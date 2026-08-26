class Solution {
private:
    bool canPut(vector<int>& position,int size, int m, int gap){
        int no_balls = 1;
        int pos = position[0];
        for (int i = 1; i < size; i++){
            if((position[i] - pos) >= gap){
                no_balls++;
                pos = position[i];
            }
            if (no_balls >= m) return true;
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int l = 1;
        int n = position.size();
        int r = position[n - 1] - position[0];
        while (l <= r){
            int mid = l + (r - l)/2;
            if (canPut(position, n, m, mid)) l = mid + 1;
            else {
                r = mid - 1;
            }
        }
        return r;
    }
};