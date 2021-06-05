// Copyright 2021 PaninaPolina
#include <iostream>
#include "train.h"

int main() {
  Train new_train;
  for (int i = 0; i < 50; ++i)
      new_train.add_cage();
  std::cout << new_train.find_length() << std::endl;
  if (50 == new_train.find_length())
      std::cout << true << std::endl;
  return 0;
}
