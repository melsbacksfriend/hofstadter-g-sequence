#pragma once
#include <map>

class G{

public:
    static int naiveG(int n);

    static int memoizedG(int n);

private:
    static int memoizedG(int n, std::map<int, int>& hashmap);
};