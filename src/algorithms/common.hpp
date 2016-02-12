#ifndef __COMMON_HPP_INCLUDED__
#define __COMMON_HPP_INCLUDED__
#include <cmath>

namespace AP
{
    namespace algorithms 
    {
        template <typename Iterator>
        Iterator get_middle(const Iterator &begin, const Iterator &end, std::random_access_iterator_tag)
        {
            Iterator middle = begin + std::floor( (end-begin)/2 );
            return middle;
        }
        
    }
}

#endif
