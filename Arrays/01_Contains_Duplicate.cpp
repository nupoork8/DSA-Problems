/*
Problem: 217 (Contains Duplicate)
Link: https://leetcode.com/problems/contains-duplicate/

Approach:
1. Create an unordered_set.
2. Traverse array.
3. If element already exists in set -> return true.
4. Otherwise insert element.
5. Return false.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for(int num : nums)
        {
            if(seen.find(num) != seen.end())
            {
                return true;
            }

            seen.insert(num);
        }

        return false;
    }
};


/*
What I Learned:
- unordered_set helps check duplicates.
- find() checks if value exists.
- insert() stores unique values.
*/