#include "../algorithms/heap.hpp"
#include <vector>


template <typename T>
class BinaryHeap
{
    public:
        BinaryHeap(size_t size)
            : _data(size)
        {}

        // TODO: constructor "from iterator"

        // TODO: Copy-constructor, etc.
        //
        
        const :


        T extract_min()
        {
            const T min = _data[0];
            const Iterator last = std::previous(end, 1);
            std::swap(*last, *begin); 
            std::advance(end, -1);
            return ret_val;
        }

    private:
        std::vector<T> _data;

}
