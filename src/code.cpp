#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    return (left - right) * (left - right);
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if ((mask < 0) or (bit_pos < 0)){ return false; }
    int temp = mask & (1<<bit_pos);
    temp = temp >> bit_pos;
    return (temp % 2) == 1;
  }

  // Task 3
  int max3(int left, int middle, int right) {
    if (left > right) {
      if (left > middle) {
        return left;
      }
      return middle;
    }
    if (right > middle) {return right; }
    return middle;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr and right != nullptr){
      int tmp = *left;
      *left = *right;
      *right = tmp;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int sum = 0;
    if (arr != nullptr) {
      for (int i = 0; i < length; i++){
        sum += arr[i];
      }
    }
    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (length > 0 and arr != nullptr) {
      int max = arr[0];
      int *ptr = &arr[0];
      for (int i = 0; i < length; i++) {
        if (arr[i] > max) {
          max = arr[i];
          ptr = &arr[i];
        }
      }
      return ptr;
    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length > 0){
      int *arr = new int[length];
      for (int i =0; i<length;i++)
        arr[i] = init_value;
      return arr;
    }
    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (length <=0 or arr_in == nullptr){ return nullptr;}
    int *arr = new int[length];
    std::copy(arr_in, arr_in + length, arr);
    return arr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if(arr == nullptr){ os<<"Invalid argument: arr\n" ;}
    else if (length <= 0) { os<<"Invalid argument: length\n";}
    else if (k <= 0) { os<<"Invalid argument: k\n";}
    else {
      for(int i=0; i<length; i+=k){
        os<<arr[i]<<'\t';
      }
    }
  }

}  // namespace assignment
