#ifndef STREAMS_H 
#define STREAMS_H 

#include <vector>
#include <string>

/* person_info has one member that represents person's name
 * and a vector holding varying number of associated phone numbers */

struct person_info {
    std::string name;
    std::vector<std::string> phones;  
};

#endif

