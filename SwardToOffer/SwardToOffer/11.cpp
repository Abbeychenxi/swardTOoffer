////
////  11.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/4.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////数值的整数次方
//
//#include <iostream>
//
//using namespace std;
//
//double PowerWithUnsignedExponent(double base, unsigned int exponent){
//    if (exponent == 0) {
//        return 1;
//    }
//    if (exponent == 1) {
//        return base;
//    }
//    
//    double result = PowerWithUnsignedExponent(base, exponent>>1);
//    result *= result;
//    if (exponent & 0x1) {
//        result *= base;
//    }
//    return result;
//}
//
//int main(){
//    double result = PowerWithUnsignedExponent(2, 10);
//    cout << result << endl;
//}