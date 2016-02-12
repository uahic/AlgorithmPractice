#include "heap.hpp"

namespace AP
{

    namespace algorithms
    {
        using std::swap;

        template <typename Iterator> 
        typename std::iterator_traits<Iterator>::value_type extract_min(Iterator begin, Iterator end)
        {
            auto min = *begin;
            Iterator last = std::prev(end, 1);
            swap(*last, *begin); 
            std::advance(end, -1);
            return min;
        }

        template <typename Iterator>
        void heapsort(Iterator begin, Iterator end)
        {
            make_heap(begin, end);
            for( Iterator i = end; i != begin; i-- ) 
            {
                extract_min(begin, i);
            }
        }
    }
}
