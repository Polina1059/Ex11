// Copyright 2021 Panina Polina
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(TrainTest, test1) {
  Train train;
  for (int i = 0; i < 15; i++) { train.add_cage(); }
  EXPECT_EQ(9, train.find_length());
}

TEST(TrainTest, test2) {
  Train train;
  for (int i = 0; i < 500; i++) { train.add_cage(); }
  EXPECT_EQ(1206, train.find_length());
}

TEST(TrainTest, test3) {
  Train train;
  for (int i = 0; i < 1000; i++) { train.add_cage(); }
  EXPECT_EQ(10300, train.find_length());
}
