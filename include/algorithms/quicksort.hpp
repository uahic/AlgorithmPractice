#include <iterator>
#include <iostream>

namespace AP
{
    namespace algorithms 
    {

        template <typename Iterator>
        Iterator partition(Iterator begin, Iterator end, std::random_access_iterator_tag)
        {
            Iterator l = begin;
            Iterator pivot = end;
            Iterator r;
            for ( r = begin; r != pivot; r++ )
            {
                if ( *r > *pivot )
                {
                    std::swap(*r, *l);
                }
                if ( *l < *pivot )
                {
                   l++; 
                }
            }
            std::swap(*l, *pivot);
            return l;
        }

        template <typename Iterator>
        void quicksort(Iterator begin, Iterator end)
        {
            if( std::distance(begin, end) <= 1 )
                return;
            Iterator pivot = partition(begin, end, typename std::iterator_traits<Iterator>::iterator_category() );
            quicksort(begin, pivot);
            quicksort(pivot, end);
        }

    }
}
