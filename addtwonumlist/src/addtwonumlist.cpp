/*
 * addtwonumlist.cpp
 *
 *  Created on: Dec 5, 2019
 *      Author: guest
 */

#include "addtwonumlist.h"

namespace addtwonumlist
{
    std::list<int> AddTwoNumList::addLists(const std::list<int>& a, const std::list<int>& b)
    {
        int carry = 0;
        std::list<int> result;

        for (auto it1 = a.begin(), it2 = b.begin(); it1 != a.end() && it2 != b.end(); it1++, it2++)
        {
            result.push_back(((*it1 + *it2 + carry) % 10));
            carry = (*it1 + *it2) / 10;
        }

        return result;
    }
}


