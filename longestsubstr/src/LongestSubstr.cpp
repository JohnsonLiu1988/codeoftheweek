/*
 * LongestSubstr.cpp
 *
 *  Created on: Dec 5, 2019
 *      Author: guest
 */

#include "LongestSubstr.h"
#include <unordered_set>
#include <memory>
#include <cstring>
#include <iostream>

namespace longestsubstr
{
    std::string LongestSubstr::findLongestSubstr(const char* str)
    {
        std::unordered_set<char> substr;
        std::unique_ptr<char[]> result(new char[strlen(str)]);
        const char* pos = str;
        int maxSize = 0;

        for (int i = 0; i < strlen(str); i++)
        {
            substr.emplace(str[i]);
            for (int j = i + 1; j < strlen(str); j++)
            {
                if (substr.count(str[j]) == 0)
                {
                    substr.emplace(str[j]);
                }
                else
                {
                    break;
                }
            }

            if (substr.size() > maxSize)
            {
                maxSize = substr.size();
                pos = str + i;
            }

            substr.clear();
        }

        int start = 0;
        while (maxSize--)
        {
            result[start++] = *pos++;
        }

        result[start] = '\0';

        return std::string(result.get());
    }
}


