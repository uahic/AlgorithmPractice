#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>
#include "algorithms/quicksort.hpp"

TEST ( Quicksort, ascending_descending )
{
    std::vector<int> numbers_sorted { 5, 6, 7, 8, 9, 9 };
    std::vector<int> numbers_expected( numbers_sorted );
    AP::algorithms::quicksort( begin(numbers_sorted), end(numbers_sorted) );
    ASSERT_THAT( numbers_expected, ::testing::ContainerEq(numbers_sorted) );
    std::reverse( numbers_sorted.begin(), numbers_sorted.end() );
    std::reverse( numbers_expected.begin(), numbers_expected.end() );
    ASSERT_THAT( numbers_expected, ::testing::ContainerEq(numbers_sorted) );
}

TEST ( Quicksort, alternating )
{
    std::vector<int> numbers_alternating { 1, 3, 2, 4, 3, 5, 4, 6, 5 };
    std::vector<int> numbers_expected    { 1, 2, 3, 3, 4, 4, 5, 5, 6 };
    ASSERT_THAT( numbers_expected, ::testing::ContainerEq(numbers_alternating) );
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
