// Copyright 2021 Panina Polina
#include <gtest/gtest.h>
#include <string>
#include "train.h"

TEST(TrainTest, test1) {
  Train train;
  for (int i = 0; i < 15; i++) { train.add_cage(); }
  EXPECT_EQ(15, train.find_length());
}

TEST(TrainTest, test2) {
  Train train;
  for (int i = 0; i < 500; i++) { train.add_cage(); }
  EXPECT_EQ(500, train.find_length());
}

TEST(TrainTest, test3) {
  Train train;
  for (int i = 0; i < 1000; i++) { train.add_cage(); }
  EXPECT_EQ(1000, train.find_length());
}
