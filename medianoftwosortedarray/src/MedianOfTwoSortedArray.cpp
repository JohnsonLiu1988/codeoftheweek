/*
 * MedianOfTwoSortedArray.cpp
 *
 *  Created on: Dec 7, 2019
 *      Author: guest
 */

#include "MedianOfTwoSortedArray.h"
#include <iostream>
#include <algorithm>
#include <climits>

namespace medianoftwosortedarray
{
    // implemented by myself but non-O(log(m+n))
    // float MedianOfTwoSortedArray::findMedian(const std::vector<int>& v1, const std::vector<int>& v2) const
    // {
    //     int beginPos = (v1.size() + v2.size() + 1) / 2;
    //     int endPos = (v1.size() + v2.size() + 2) / 2;

    //     int pos = 0, target = 0;

    //     float result;

    //     auto it1 = v1.begin(), it2 = v2.begin();
    //     for (; it1 != v1.end() && it2 != v2.end();)
    //     {
    //         ++pos;

    //         if (*it1 < *it2)
    //         {
    //             if (pos >= beginPos && pos <= endPos)
    //             {
    //                 target += *it1;
    //             }

    //             it1++;
    //         }
    //         else
    //         {
    //             if (pos >= beginPos && pos <= endPos)
    //             {
    //                 target += *it2;
    //             }

    //             it2++;
    //         }
    //     }

    //     if (beginPos != endPos)
    //     {
    //         if (it1 != v1.end())
    //         {
    //             target += *it1;
    //         }

    //         if (it2 != v2.end())
    //         {
    //             target += *it2;
    //         }

    //         result = (float)target / 2;
    //     }
    //     else
    //     {
    //         result = (float)target;
    //     }

    //     return result;
    // }

    float MedianOfTwoSortedArray::findMedian(const std::vector<int>& v1, const std::vector<int>& v2) const
    {
        int beginPos = (v1.size() + v2.size() + 1) / 2;
        int endPos = (v1.size() + v2.size() + 2) / 2;

        return (findKth(v1, 0, v2, 0, beginPos) + findKth(v1, 0, v2, 0, endPos)) / 2.0;
    }

    int MedianOfTwoSortedArray::findKth(const std::vector<int>& nums1, int i, const std::vector<int>& nums2, int j, int k) const
    {
        if (i >= nums1.size()) return nums2[j + k - 1];
        if (j >= nums2.size()) return nums1[i + k - 1];
        if (k == 1) return std::min(nums1[i], nums2[j]);
        int midVal1 = (i + k / 2 - 1 < nums1.size()) ? nums1[i + k / 2 - 1] : INT_MAX;
        int midVal2 = (j + k / 2 - 1 < nums2.size()) ? nums2[j + k / 2 - 1] : INT_MAX;
        if (midVal1 < midVal2) {
            return findKth(nums1, i + k / 2, nums2, j, k - k / 2);
        } else {
            return findKth(nums1, i, nums2, j + k / 2, k - k / 2);
        }
    }
}
