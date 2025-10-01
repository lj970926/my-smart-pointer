#include <iostream>

#include "gtest/gtest.h"
#include "my_shared_ptr.h"

using namespace my_smart_ptr;

TEST(MySharedPtrTest, BasicTest) {
  int *raw_ptr = new int(4);
  MySharedPtr<int> ptr(raw_ptr);
  std::cout << "val: " << *ptr << std::endl;
}
