// problem link
// https://leetcode.com/problems/find-the-sum-of-encrypted-integers/description/


class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
      long long int sum = 0;

      for(int i : nums){
        int val = 0, c = 0;

        while(i > 0){
            if(i%10 > val){
                val = i%10;
            }
            c++;
            i /= 10;
        }
        long long  int res = 0;
        while(c > 0){
            res = res*10 + val;
            c--;
        }

        sum += res;

      }


      return sum;
    }
};
