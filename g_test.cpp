#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "g.hpp"

TEST_CASE( "it computes the nth term in the Hofstadter G Sequence" )
{
    REQUIRE( G::naiveG(0) == 0 );
    REQUIRE( G::memoizedG(0) == 0 );
    REQUIRE( G::naiveG(1) == 1 );
    REQUIRE( G::memoizedG(1) == 1 );
    REQUIRE( G::naiveG(2) == 1 );
    REQUIRE( G::memoizedG(2) == 1 );
    REQUIRE( G::naiveG(3) == 2 );
    REQUIRE( G::memoizedG(3) == 2 );
    REQUIRE( G::naiveG(4) == 3 );
    REQUIRE( G::memoizedG(4) == 3 );
    REQUIRE( G::naiveG(5) == 3 );
    REQUIRE( G::memoizedG(5) == 3 );
    REQUIRE( G::naiveG(6) == 4 );
    REQUIRE( G::memoizedG(6) == 4 );
}

TEST_CASE( "benchmarking the G functions" )
{
    BENCHMARK("G::naiveG(20)") {
        return G::naiveG(20);
    };
    BENCHMARK("G::memoizedG(20)") {
        return G::memoizedG(20);
    };
    BENCHMARK("G::naiveG(40)") {
        return G::naiveG(40);
    };
    BENCHMARK("G::memoizedG(40)") {
        return G::memoizedG(40);
    };
    BENCHMARK("G::naiveG(60)") {
        return G::naiveG(60);
    };
    BENCHMARK("G::memoizedG(60)") {
        return G::memoizedG(60);
    };
    BENCHMARK("G::naiveG(80)") {
        return G::naiveG(80);
    };
    BENCHMARK("G::memoizedG(80)") {
        return G::memoizedG(80);
    };
    BENCHMARK("G::naiveG(100)") {
        return G::naiveG(100);
    };
    BENCHMARK("G::memoizedG(100)") {
        return G::memoizedG(100);
    };
}