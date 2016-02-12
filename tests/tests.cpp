#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <vector>
#include <cmath>
#include <iostream>
#include "algorithms/quicksort.hpp"
#include "algorithms/mergesort.hpp"
#include "algorithms/heapsort.hpp"
#include "algorithms/heap.hpp"

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

TEST ( Heap, make_heap )
{
    std::vector<int> numbers { 4, 3, 2, 5, 1 };
    AP::algorithms::make_heap(begin(numbers), end(numbers));
    for ( size_t i=0; i < numbers.size(); i++ )
    {
        ASSERT_GE( numbers[i], numbers[std::floor( (i-1)/2 )]);
    }
}

TEST ( Heapsort, alternating )
{
    std::vector<int> numbers_alternating { 1, 3, 2, 4, 3, 5, 4, 6, 5 };
    AP::algorithms::heapsort( begin(numbers_alternating), end(numbers_alternating) );
    ASSERT_THAT( numbers_alternating, ::testing::ElementsAre( 1, 2, 3, 3, 4, 4, 5, 5, 6 )  );
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
