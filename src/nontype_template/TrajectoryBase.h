#include <cstddef>
#include <vector>

template<size_t N, typename SCALAR>
class DiscreteTraj {
    public:
        SCALAR i[N];
        std::vector<SCALAR> v;
};
