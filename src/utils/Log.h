#pragma once

#include <string>
#include <iostream>
#include <iomanip>

namespace utils {
    class Log
    {
    public:
        template<typename... Args>
        static void Info(const Args&... args)
        {
            (std::cout << ... << args);
        }

        template<typename... Args>
        static void Error(const Args&... args)
        {
            (std::cout << ... << args);
        }

        template<typename... Args>
        static void Warn(const Args&... args)
        {
            (std::cout << ... << args);
        }
    };
};