#include <string>

namespace log_line {
    std::string message(std::string line) {
        // find colon in between LEVEL and MESSAGE and add 2 
        //  to get to start of message
        int messageStartPos = line.find(":") + 2;
        
        // return the message
        return line.substr(messageStartPos);
    }
    
    std::string log_level(std::string line) {
        // find end position of log level by find position
        //  of end bracket "]" and go back one position
        int levelEndPos = line.find("]") - 1;
        
        // return the log level
        return line.substr(1, levelEndPos);
    }
    
    std::string reformat(std::string line) {
        
        // return the reformatted message
        return message(line) + " (" + log_level(line) + ")";   
    }
}  // namespace log_line
