#pragma once
#include <cstdint>

namespace my_smart_ptr {
template<typename T>
class MySharedPtr {
public:
    MySharedPtr() = default;
    explicit MySharedPtr(T* raw_ptr);
    MySharedPtr(const MySharedPtr& other);
    T* operator->();
private:
    T* raw_ptr_;
    uint64_t ref_cnt_;
};

template<typename T>
MySharedPtr<T>::MySharedPtr(const MySharedPtr& other) {
    raw_ptr_ = other->raw_ptr_;
    ref_cnt_ = ++other->ref_cnt_;
}

template<typename T>
T* MySharedPtr<T>::operator->() {
    return raw_ptr_;
}
}
