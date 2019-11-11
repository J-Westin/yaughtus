#ifndef YGHT_UTILITIES_H
#define YGHT_UTILITIES_H

#include <vector>

#include "types.h"

namespace yght {

    template< typename T >
    bool contains(const std::vector<T>& v, const T& x) {
        for (uint i(0); i < v.size(); i++) {
            if (v[i] == x) {
                return true;
            }
        }
        return false;
    }

} // namespace yght

#endif // YGHT_UTILITIES_H
