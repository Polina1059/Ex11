// Copyright 2021 PaninaPolina
#include "train.h"
#include <iostream>

void Train::add_cage(){
  Cage* new_cage = new Cage();
  if (!first) {
    first = new_cage;
    last = new_cage;
    first->next = last;
    first->prev = last;
  }
  new_cage->prev = last;
  new_cage->next = first;
  last->next = new_cage;
  last = new_cage;
}

void Train::print_cages(){
  int i = 1;
  Cage* cage = first;
  while (cage != last) {
    std::cout << i << cage->get() << '\n';
    cage = cage->next;
    i++;
  }
  std::cout << i << last->get() << '\n';
}

int Train::find_length(){
  Cage* cage = first;
  cage->on();
  int num = 1;
  while (true) {
    for (int i = 0; i < num; i++) {
      cage = cage->next;
      cage->off();
    }
    for (int i = 0; i < num; i++) { cage = cage->prev; }
    if (cage->get() == false) { break; }
    num++;
  }
  return num;
}
