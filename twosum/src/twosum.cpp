/*
 * twosum.cpp
 *
 *  Created on: Dec 3, 2019
 *      Author: guest
 */

#include "twosum.h"
#include <unordered_map>

namespace twosum
{
    std::vector<int> TwoSum::getIndex(std::vector<int>& inputs, int target)
    {
        std::unordered_map<int, int> tmp;
        int begin = 0;
        std::vector<int> result;
        for (int value : inputs)
        {
            tmp.emplace(value, begin++);
        }

        begin = 0;

        for (int value : inputs)
        {
            auto it = tmp.find(target - value);
            if (it != tmp.end() && begin != it->second)
            {
            	result.push_back(begin);
            	result.push_back(it->second);
            	break;
            }
            begin++;
        }

        return result;
    }
}



