#ifndef HEAP_HPP_INCLUDED
#define HEAP_HPP_INCLUDED
#include "common.hpp"

namespace AP
{

    namespace algorithms
    {
        using std::swap;

        template <typename Iterator>
        void sift_down(const Iterator begin, const Iterator end, const Iterator start)
        {
            auto position = std::distance(begin, start);
            // is equivalent to left_child = begin[ start*2 + 1];
            Iterator left_child = std::next(start, position + 1 );
            Iterator right_child = std::next(start, position + 2 );
            if ( right_child >= end )
                return;

            if ( *start > *left_child )
            {
                swap(*start, *left_child);
                sift_down(begin, end, left_child);
            }
            if ( *start > *right_child )
            {
                swap(*start, *right_child);
                sift_down(begin, end, right_child);
            }
        }


        template <typename Iterator>
        void make_heap(const Iterator &begin, const Iterator end)
        {
            Iterator middle = get_middle(begin, end, typename std::iterator_traits<Iterator>::iterator_category());
            for ( Iterator i = middle; i != end; i++)
            {
                swap(*i, *begin);
                sift_down(begin, end, begin);
            }
        }

    }
}
#endif 
