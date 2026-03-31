#include "raindrops.h"

namespace raindrops {

    std::string convert(int num) {
        std::string str = "";

        // if num is evenly divisible by 3, 5 or 7, append
        //  appropriate response to str
        if (num % 3 == 0) str += "Pling";
        if (num % 5 == 0) str += "Plang";
        if (num % 7 == 0) str += "Plong";

        // if num is not evenly divisible by 3, 5 or 7
        //  return string of number
        if (str == "") str = std::to_string(num);

        return str;
    }
    
}  // namespace raindrops
