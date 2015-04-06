//
//  36.cpp
//  SwardToOffer
//
//  Created by 陈希 on 15/4/6.
//  Copyright (c) 2015年 陈希. All rights reserved.
//
//数组中的逆序对
//{7,5,6,4}
//归并排序

#include <iostream>

using namespace std;

int InversePairsCore(int* data, int* copy, int start, int end) {
    if (start == end) {
        copy[start] = data[start];
        return 0;
    }
    int length = (end - start) / 2;
    int left = InversePairsCore(data, copy, start, start+length);
    int right = InversePairsCore(data, copy, start+length, end);
    
    int i = start + length;
    int j = end;
    int indexCopy = end;
    int count = 0;
    while (i >= start && j >= start + length + 1) {
        if (data[i] > data[j]) {
            copy[indexCopy--] = data[i--];
            count += j - start - length;
        }
        else {
            copy[indexCopy--] = data[j--];
        }
    }
    for (; i >= start; ++i) {
        copy[indexCopy--] = data[i];
    }
    for (; j >= start + length + 1; --j) {
        copy[indexCopy--] = data[j];
    }
    return left + right + count;
}

int InversePairs(int* data, int length) {
    if (data == NULL || length < 0) {
        return 0;
    }
    int* copy = new int [length];
    
    for (int i = 0; i < length; ++i) {
        copy[i] = data[i];
    }
    
    int count = InversePairsCore(data, copy, 0, length - 1);
    delete [] copy;
    
    return count;
}
