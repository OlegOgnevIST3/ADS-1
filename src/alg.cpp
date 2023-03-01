// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
    if (value <= 1) 
    {
      return false;
    }
    for (int i = 2; i * i <= value; i++)
    {
        if (value % i == 0)
        {
          return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    int count = 1;
    uint64_t s = 2;
    for (int i = 3; count != n; i++)
    {
        if (checkPrime(i)) 
        {
            s = i;
            count++;
        }
    }
    return s;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    uint64_t i;
    for (i = value + 1; !checkPrime(i); i++) 
    {
    }
    return i;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    uint64_t sum = 0;
    for (int i = 2; i < hbound; i++)
    {
        if (checkPrime(i))
        {
          sum += i;
        }
    }
    return sum;
}
