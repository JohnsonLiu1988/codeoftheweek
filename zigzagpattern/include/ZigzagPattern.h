#ifndef INCLUDE_ZIGZAGPATTERN_H_
#define INCLUDE_ZIGZAGPATTERN_H_

#include <string>
#include <cstddef>

namespace zigzagpattern
{
    class ZigzagPattern
    {
    public:
        std::string converse(const std::string& input, std::size_t nRows);
    };
}

#endif /* INCLUDE_ZIGZAGPATTERN_H_ */
