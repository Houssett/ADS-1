// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int flag = 0;
for (int i = 2; i < value; i++)
  if (value % i == 0) {
    flag = 1;
    break;
}
if (flag == 0) return true;
else
return false;
}

uint64_t nPrime(uint64_t n) {
int flag, k = 0, num = 1;
while (k != n) {
  num++;
  flag = 0;
  for (int i = 2; i < num; i++)
    if (num % i == 0) {
      flag = 1;
      break;
}
if (flag == 0) k++;
}
return num;
}

uint64_t nextPrime(uint64_t value) {
int flag, k = 0;
while (k != 1) {
  value++;
  flag = 0;
  for (int i = 2; i < value; i++)
    if (value % i == 0) {
      flag = 1;
      break;
}
if (flag == 0) k++;
}
return value;
}

uint64_t sumPrime(uint64_t hbound) {
int flag;
uint64_t sum = 2;
if (hbound < 3) return 0;
if (hbound == 3) return 2;
for (uint64_t num = 3; num < hbound; num += 2) {
  flag = 0;
  for (int i = 2; i < num; i++)
    if (num % i == 0) {
      flag = 1;
      break;
}
if (flag == 0) sum += num;
}
return sum;
}
