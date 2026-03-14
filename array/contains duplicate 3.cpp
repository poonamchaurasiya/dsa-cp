#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        if (valueDiff < 0) return false;
        
        unordered_map<long long, long long> buckets;
        long long size = (long long)valueDiff + 1;

        for (int i = 0; i < nums.size(); i++) {
            long long num = nums[i];
            long long id = getBucketId(num, size);

            if (buckets.count(id)) return true;

            if (buckets.count(id - 1) && abs(num - buckets[id - 1]) <= valueDiff)
                return true;

            if (buckets.count(id + 1) && abs(num - buckets[id + 1]) <= valueDiff)
                return true;

            buckets[id] = num;

            if (i >= indexDiff) {
                long long oldId = getBucketId(nums[i - indexDiff], size);
                buckets.erase(oldId);
            }
        }
        return false;
    }

private:
    long long getBucketId(long long num, long long size) {
        if (num >= 0) return num / size;
        return ((num + 1) / size) - 1;
    }
};