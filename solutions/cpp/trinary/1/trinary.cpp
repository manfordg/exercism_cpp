#include "trinary.h"

namespace trinary {

    int to_decimal(std::string tri) {
        int exp = 0;
        int sum = 0;

        // start with rightmost char and examine each char as we move left
        for (int i = tri.length() - 1; i >= 0; i--) {
            char c = tri[i];
            
            // if char is valid, convert char to int and multiply by 3^exp
            if (c == '0' || c == '1' || c == '2') {
                sum += (std::pow(3, exp) * (c - '0'));
                
            } else {
                // character is invalid, so return 0
                return 0;
            }
            // increment exponent 
            exp++;
        }

        return sum;
    }

}  // namespace trinary
