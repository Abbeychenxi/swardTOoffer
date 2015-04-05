////
////  22.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////栈的压入和弹出序列
////序列1为栈的压入序列，判断序列2是否为栈的弹出序列
//
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//bool isPopOrder(int* pushOrder, int* popOrder, int length) {
//    bool result = false;
//    
//    if (pushOrder != NULL && popOrder != NULL && length > 0) {
//        int* push_next = pushOrder;
//        int* pop_next = popOrder;
//        
//        stack<int> s;
//        while (pop_next - popOrder < length) {
//            while (s.empty() || s.top() != *pop_next) {
//                if (push_next - pushOrder == length) {
//                    break;
//                }
//                s.push(*push_next);
//                ++push_next;
//            }
//            
//            if (s.top() != *pop_next) {
//                break;
//            }
//            
//            s.pop();
//            ++pop_next;
//        }
//        if (s.empty() && pop_next - popOrder == length) {
//            result = true;
//        }
//    }
//    return result;
//}
//
//int main() {
//    int a[5] = {1,2,3,4,5};
//    int b[5] = {4,5,3,2,1};
//    bool result = isPopOrder(a, b, 5);
//    cout << result << endl;
//}