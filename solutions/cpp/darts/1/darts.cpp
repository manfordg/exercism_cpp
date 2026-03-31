#include "darts.h"

namespace darts {

    int score(double x, double y) {
        double dist = std::sqrt((x * x) + (y * y));

        if (dist <= 1.0) return 10;
        if (dist <= 5.0) return 5;
        if (dist <= 10.0) return 1;
        return 0;
    }
    
}  // namespace darts
