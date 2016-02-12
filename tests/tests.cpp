#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>
#include "algorithms/quicksort.hpp"
#include "algorithms/mergesort.hpp"

TEST ( Quicksort, ascending_descending )
{
    std::vector<int> numbers_ascending { 5, 6, 7, 8, 9, 9 };
    AP::algorithms::quicksort( begin(numbers_ascending), end(numbers_ascending) );
    ASSERT_THAT( numbers_ascending, ::testing::ElementsAre( 5, 6, 7, 8, 9, 9 ) );
    std::reverse( begin(numbers_ascending), end(numbers_ascending) );
    ASSERT_THAT( numbers_ascending, ::testing::ElementsAre( 9, 9, 8, 7, 6, 5 ) );
}

TEST ( Quicksort, alternating )
{
    std::vector<int> numbers_alternating { 1, 3, 2, 4, 3, 5, 4, 6, 5 };
    AP::algorithms::quicksort( begin(numbers_alternating), end(numbers_alternating) );
    ASSERT_THAT( numbers_alternating, ::testing::ElementsAre( 1, 2, 3, 3, 4, 4, 5, 5, 6 )  );
}

TEST ( Mergesort, ascending_descending )
{
    std::vector<int> numbers_ascending { 5, 6, 7, 8, 9, 9 };
    AP::algorithms::mergesort( begin(numbers_ascending), end(numbers_ascending) );
    ASSERT_THAT( numbers_ascending, ::testing::ElementsAre( 5, 6, 7, 8, 9, 9 ) );
    std::reverse( begin(numbers_ascending), end(numbers_ascending) );
    ASSERT_THAT( numbers_ascending, ::testing::ElementsAre( 9, 9, 8, 7, 6, 5 ) );
}

TEST ( Mergesort, alternating )
{
    std::vector<int> numbers_alternating { 1, 3, 2, 4, 3, 5, 4, 6, 5 };
    AP::algorithms::mergesort( begin(numbers_alternating), end(numbers_alternating) );
    ASSERT_THAT( numbers_alternating, ::testing::ElementsAre( 1, 2, 3, 3, 4, 4, 5, 5, 6 )  );
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
