#pragma once
#include <cstdint>

namespace my_smart_ptr {
template<typename T>
class MySharedPtr {
public:
    MySharedPtr() = default;
    explicit MySharedPtr(T* raw_ptr);
    MySharedPtr(const MySharedPtr& other);
private:
    T* raw_ptr_;
    uint64_t ref_cnt_;
};
}
