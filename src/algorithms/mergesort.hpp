#include <iterator>
#include "common.hpp"

//  i             j
//  1 3  5    //  2 3 4 6

//   i            j
// 1 2 5    //  3 3 4 6
//       
//     i           j
// 1 2 3   //  3 5 4 6
//
//             i   j
// 1 2 3   //  3 5 4 6
//
//               i   j 
// 1 2 3   //  3 4 5 6

namespace AP
{
    namespace algorithms 
    {
        using std::swap;


        template <typename Iterator>
        void mergesort_merge(const Iterator &begin, const Iterator &middle, const Iterator &end)
        {
            Iterator i = begin;
            Iterator j = middle;
            while( i < j )
            {
                if( *i > *j && j < end )
                {
                    swap(*i, *j);
                    std::advance(j, 1);
                }
                std::advance(i, 1);
            }
        }

        template <typename Iterator>
        void mergesort(Iterator begin, Iterator end)
        {
            if( std::distance(begin, end) <= 1 )
                return;
            Iterator middle = get_middle( begin, end, typename std::iterator_traits<Iterator>::iterator_category() );
            mergesort(begin, middle);
            mergesort(middle, end);
            mergesort_merge(begin, middle, end);
        }

    }
}
