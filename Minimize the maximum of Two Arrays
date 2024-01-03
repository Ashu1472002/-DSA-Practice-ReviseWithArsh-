class Solution {
public:
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        long long l = 1, r = INT_MAX, ans = r, d1 = divisor1, d2 = divisor2, cnt1 = uniqueCnt1, cnt2 = uniqueCnt2;
        //Finds lcm of divisor1 and divisor2
        long long g= __gcd(d1, d2);
        long long lcm = (d1 * d2) / g;

        while(l <= r){
            long long mid = (l + r) / 2;
            //if divisor1 and divisor2 are both same then 
            if(d1 == d2){
                // calculate value of cnt that can be filled in both arrays which are not divisible by divisor1
                long long cnt = mid - (mid / d1); 
                //if count is >= cnt1 +cnt2 then it is sufficient to fill both the arrays
                if(cnt >= cnt1 + cnt2){
                    ans = mid;
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
            //if both divisors are not same then
            else{
                //calculate integers which are divisible by both
                long long common = mid / lcm;

                // k1 = integers which are divisible by d1 only, not d2
                long long k1 = (mid / d1) - common;
                // k2 = integers which are divisible by d2 only, not d1
                long long k2 = (mid / d2) - common;

                long long z1 = cnt1, z2 = cnt2;

                // count of integers that can be filled in both the arrays
                long long avail = mid - (k1 + k2 + common); 
                
                z1 -= min(z1, k2); // array1 can take k2 integers means which are divisible by d2
                z2 -= min(z2, k1); // array 2 can take k1 integers means which are divisible by d1
                
                //if count of both arrays is <= available integers then it is sufficient to fill both the arrays
                if(z1 + z2 <= avail){
                    ans = mid;
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }
        }     
        return ans;
    }

};
