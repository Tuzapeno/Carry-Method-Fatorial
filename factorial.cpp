#include "factorial.h"

//Generate a vector with all factorial numbers.
//and optimize it by removing zeroes to right.
int createOptFactVec(std::vector<int>& vec, int max)
{
    int zeroCount = 0;
    for(int i = 2; i <= max; ++i)
    {
        int buffer = i;
        zeroCount += countZeroes(i);
        for(int a = 0; a < countZeroes(i); ++a)
            buffer /= 10;
        vec.push_back(buffer);
    }
    return zeroCount;
}

//Counts the number of zeroes in a number.
int countZeroes(int n) 
{
  int count = 0;
  while(n % 10 == 0)
  {count++; n /= 10;}
  return count;
}

void multiplication(std::vector<int>& resultVec, int multiplier)
{
    int product;
    int carry = 0;

    for(int i = 0; i < resultVec.size(); ++i)
    {
        product = resultVec[i] * multiplier + carry;
        carry = product / 10;
        resultVec[i] = product % 10;
    }

    while(carry > 0)
    {
        resultVec.push_back(carry % 10);
        carry /= 10;
    }
}

