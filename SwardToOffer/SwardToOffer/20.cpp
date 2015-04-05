////
////  20.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////顺时针打印矩阵
//
//#include <iostream>
//
//using namespace std;
//
//void printArrayCore(int** number, int col, int row, int start) {
//    int endX = col - 1 - start;
//    int endY = row - 1- start;
//    
//    for (int i = start; i <= endX; ++i) {
//        int num = number[start][i];
//        cout << num << endl;
//    }
//    if (start < endY) {
//        for (int i= start + 1; i <= endY; ++i) {
//            int num = number[i][endX];
//            cout << num << endl;
//        }
//    }
//    if (start < endX && start < endY) {
//        for (int i = endX - 1; i >= start; --i) {
//            int num = number[endY][i];
//            cout << num << endl;
//        }
//    }
//    if (start < endX && start < endY - 1) {
//        for (int i = endY - 1; i >= start + 1; --i) {
//            int num = number[i][start];
//            cout << num << endl;
//        }
//    }
//}
//
//void printArray(int** number, int col, int row) {
//    if (number == NULL || col <= 0 || row <= 0) {
//        return;
//    }
//    int start = 0;
//    while (col > start*2 && row > start * 2) {
//        printArrayCore(number, col, row, start);
//        ++start;
//    }
//}