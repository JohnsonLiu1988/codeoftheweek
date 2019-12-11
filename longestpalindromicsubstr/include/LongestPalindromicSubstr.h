/*
 * LongestPalindromicSubstr.h
 *
 *  Created on: Dec 8, 2019
 *      Author: guest
 */

#ifndef INCLUDE_LONGESTPALINDROMICSUBSTR_H_
#define INCLUDE_LONGESTPALINDROMICSUBSTR_H_

#include <string>

namespace longestpalindromicsubstr
{
    class LongestPalindromicSubstr
    {
    public:
        std::string findLongestPalindromicSubstr(const std::string& input);
    private:
        void searchPalindrome(std::string s, int left, int right, int& start, int& maxLen);

    };
}


#endif /* INCLUDE_LONGESTPALINDROMICSUBSTR_H_ */
