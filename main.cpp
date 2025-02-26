#include "factorial.h"

int main(int argc, char **argv){
    int numZeroes;
    std::vector<int> factorial_values;
    std::vector<int> result = {1};

    if(argc != 2)
    {
      std::cout << "Use: ./exec <factorial>";
      return 0;
    }

    numZeroes = createOptFactVec(factorial_values, atoi(argv[1]));

    //Gets every number in the list and multiplies the result.
    for(std::vector<int>::const_iterator it = factorial_values.begin(); it != factorial_values.end(); ++it)
    {
      multiplication(result, *it); 
      std::cout << "Current factorial: " << *it << std::endl;
    }
    
    //Print the list in reverse order.
    for(std::vector<int>::reverse_iterator it = result.rbegin(); it != result.rend(); ++it)
      std::cout << *it;

    //Adds the zeroes removed earlier to the final number.
    for(int i = 0; i < numZeroes; ++i)
      std::cout << 0;

    std::cout << std::endl;

    std::cout << "Number of Digits: " << result.size() + numZeroes << std::endl;
  
    return 0;
}