////
////  12.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/4.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////打印最大的1到n位数
////转化成数字的全排列问题
//
//#include <iostream>
//
//using namespace std;
//
//void print1ToMaxOfDigitsCore(char* number, int length, int index){
//    if (index == length - 1) {
//        cout << number << endl;
//        return;
//    }
//    for (int i = 0; i != 10; ++i) {
//        number[index+1] = i + '0';
//        print1ToMaxOfDigitsCore(number, length, index+1);
//    }
//}
//
//void print1ToMaxOfDigits(int n){
//    if (n <= 0) {
//        return;
//    }
//    
//    char* number = new char(n + 1);
//    number[n] = '\0';
//    
//    for (int i = 0; i != 10; ++i) {
//        number[0] = i + '0';
//        print1ToMaxOfDigitsCore(number, n, 0);
//    }
//    delete[] number;
//}
//
//int main(){
//    print1ToMaxOfDigits(3);
//    return 0;
//}
