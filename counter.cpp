#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdexcept>
#include "counter.hpp"
#include "name_checker.hpp"

using  std::string, std::cin, std::cout, std::size_t, std::endl, std::vector;
vector<int> CountExceptions(vector<string> const &vect){
    vector<int> result(3);
    for(size_t i =0; i <vect.size();++i){
        
        try{
            CheckName(vect[i]);
        }
        catch (std::invalid_argument &e ){
            result[0] = result[0] +1;
        }
        catch (std::length_error &e) {
            result[1] = result[1] +1;
        }
        catch (std::out_of_range &e){
            result[2] = result[2] +1;
        }

    }
    return result;
}