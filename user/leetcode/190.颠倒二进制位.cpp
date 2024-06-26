/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */

// @lc code=start
class Solution {
private:
    const uint32_t M1 = 0x55555555;
    const uint32_t M2 = 0x33333333;
    const uint32_t M3 = 0x0f0f0f0f;
    const uint32_t M4 = 0x00ff00ff;



public:
    uint32_t reverseBits(uint32_t n) {
        // uint32_t res = 0;
        // for(int i = 0; i<32 && n > 0; i++)
        // {
        //     res |= (n & 1) <<(31-i);
        //     n >>= 1;
        // }
        // return res;
        n = n>>1 & M1 | (n & M1) << 1;
        n = n>>2 & M2 | (n & M2) << 2;
        n = n>>4 & M3 | (n & M3) << 4;
        n = n>>8 & M4 | (n & M4) << 8;
        return n >> 16 | n << 16; 
    }
};
// @lc code=end

