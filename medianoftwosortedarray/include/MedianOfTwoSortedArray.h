/*
 * MedianOfTwoSortedArray.h
 *
 *  Created on: Dec 7, 2019
 *      Author: guest
 */

#ifndef INCLUDE_MEDIANOFTWOSORTEDARRAY_H_
#define INCLUDE_MEDIANOFTWOSORTEDARRAY_H_

#include <vector>

namespace medianoftwosortedarray
{
    class MedianOfTwoSortedArray
    {
    public:
        float findMedian(const std::vector<int>& v1, const std::vector<int>& v2) const;

    // private:
    //     int findKth(const std::vector<int>& nums1, int i, const std::vector<int>& nums2, int j, int k) const;
    };
}


#endif /* INCLUDE_MEDIANOFTWOSORTEDARRAY_H_ */
