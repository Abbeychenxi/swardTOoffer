////
////  21.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////包含min函数的栈
////min,push,pop复杂度均为O(1)
//
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//template <typename T>
//class StackWithMin {
//    stack<T> _data;
//    stack<T> _min;
//    
//public:
//    StackWithMin() {};
//    ~StackWithMin() {};
//    void push(const T& data);
//    void pop();
//    const T& min() const;
//};
//
//template<typename T> void StackWithMin<T>::push(const T &data) {
//    _data.push(data);
//    if (_min.size() == 0 || data < _min.top()) {
//        _min.push(data);
//    }else {
//        _min.push(_min.top());
//    }
//}
//
//template<typename T> void StackWithMin<T>::pop() {
//    assert(_data.size() > 0 && _min.size() > 0);
//    
//    _data.pop();
//    _min.pop();
//}
//
//template<typename T> const T& StackWithMin<T>::min() const {
//    assert(_data.size() > 0 && _min.size() > 0);
//    
//    return _min.top();
//}
//
//
//int main() {
//    StackWithMin<int> s;
//}