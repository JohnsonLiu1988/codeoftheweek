#include "ZigzagPattern.h"

namespace zigzagpattern
{
    std::string ZigzagPattern::converse(const std::string& input, std::size_t nRows)
    {
        std::string result;
        int gap = 2 * nRows - 2;
        for (int i = 0; i < nRows; i++)
        {
            for(int j = i; j < input.size(); j += gap)
            {
                result += input[j];

                int pos = j + gap - 2 * i;
                if (i != 0 && i != nRows - 1 && pos < input.size())
                {
                    result += input[pos];
                }
            }
        }

        return result;
    }
}





