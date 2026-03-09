#include "booksort.h"

bool caseInsensitiveCompare(const std::string &a, const std::string &b){
    size_t len = std::min(a.size(), b.size());

    for (size_t i = 0; i < len; ++i){
        char ch1 = std::tolower(static_cast<unsigned char>(a[i]));
        char ch2 = std::tolower(static_cast<unsigned char>(b[i]));
        if (ch1 < ch2) return true;
        if (ch1 > ch2) return false;
    }

    // return shorter string if strings match
    return a.size() < b.size();
}