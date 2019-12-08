//============================================================================
// Name        : wordcount.cpp
// Author      : JohnsonLiu
// Version     :
// Copyright   : copyright@JohnsonLiu
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "wordcount.h"
#include <iostream>
#include <fstream>
// #include <stdio.h>

namespace wordcount
{
    WordCount::WordCount(const char* input)
        : input_(input)
    {
        analyzeInput();
    }

    WordCount::~WordCount()
    {
        result.clear();
    }

    bool WordCount::isWordIncluded(const char* word)
    {
        auto it = result.find(std::string(word));
        if (it != result.end())
        {
            return true;
        }

        return false;
    }

    void WordCount::analyzeInput()
    {
        if (input_[0] == '/')
        {
            std::ifstream in(input_);
            if (! in.is_open())
            {
                std::cout << "open file failed: " << std::string(input_) << std::endl;
                return;
            }

            while (in.good())
            {
                std::string word;
                in >> word;

                if (word.rfind('.') != std::string::npos || word.rfind(',') != std::string::npos)
                {
                    word.pop_back();
                }

                if (result.find(word) == result.end())
                {
                    result.emplace(word, 1);
                }
                else
                {
                    result[word]++;
                }
            }
        }
        else
        {
            doAnalyzeLine(input_);
        }
    }

    void WordCount::doAnalyzeLine(const char* line)
    {
        // for (int i = 0; i < strlen(line); i++)
        // {
        //     if (isalpha(line[i]) || line[i] == '-' || line[i] == '\'')
        //     {
        //         continue;
        //     }
        //     else
        //     {

        //     }
        // }
    }

}
