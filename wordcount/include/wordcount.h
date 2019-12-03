/*
 * wordcount.h
 *
 *  Created on: Dec 1, 2019
 *      Author: guest
 */

#ifndef WORDCOUNT_H_
#define WORDCOUNT_H_

#include <unordered_map>
#include <string>

namespace wordcount
{
    class WordCount
    {
    public:
        explicit WordCount(const char* input);
        ~WordCount();

        bool isWordIncluded(const char* word);

    private:
        void analyzeInput();
        void doAnalyzeLine(const char* line);
        // void doAnalyzeLine(const string& line);

    private:
        std::unordered_map<std::string, int> result;
        const char*                          input_;
    };
} //wordcount



#endif /* WORDCOUNT_H_ */
