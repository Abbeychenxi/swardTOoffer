////
////  9.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/4.
////  Copyright (c) 2015年 陈希. All rights reserved.
////斐波那契数列
//
//#include <iostream>
//
//using namespace std;
//
//long long Fib(unsigned int n){
//    if (n <= 0) {
//        return 0;
//    }
//    if (n == 1) {
//        return 1;
//    }
//    return Fib(n - 1) + Fib(n - 2);
//}
//
//long long Fibnacci(unsigned int n){
//    if (n == 0) {
//        return 0;
//    }
//    if (n == 1) {
//        return 1;
//    }
//    int a = 0;
//    int b = 1;
//    int result = 0;
//    for (int i = 2; i <= n; ++i) {
//        result = a + b;
//        b = result;
//        a = b;
//    }
//    return result;
//}
//
//int main(){
//    long long result = Fibnacci(10);
//    cout << result << endl;
//    return 0;
//}