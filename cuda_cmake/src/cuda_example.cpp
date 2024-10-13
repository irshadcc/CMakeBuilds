#include <cstddef>
#include <iostream>
#include <new>


template<typename T>
class Buffer {
  Buffer() : buffer_(nullptr), size_(0) {}

  Buffer(T* buffer, std::size_t size) : buffer_(buffer), size_(size) {}

  void Resize(std::size_t size) {
    buffer_ = new T(size);
  }



  private:
  T* buffer_;
  std::size_t size_;

};



int main() {



  return 0;
}