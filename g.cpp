#include "g.hpp"

int G::naiveG(int n)
{
    if (n == 0) return 0;
    return n - naiveG(naiveG(n - 1));
}

int G::memoizedG(int n)
{
    std::map<int, int> hashmap = { {0, 0} };
    return memoizedG(n, hashmap);
}

int G::memoizedG(int n, std::map<int, int>& hashmap)
{
    if (hashmap.contains(n)) return hashmap[n];
    hashmap.insert({n, n - memoizedG(memoizedG(n - 1, hashmap), hashmap)});
    return hashmap[n];
}