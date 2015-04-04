////
////  8.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/4.
////  Copyright (c) 2015年 陈希. All rights reserved.
////旋转数组中最小值
////{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，求数组的最小值
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int minOfVector(vector<int> input){
//    int length = static_cast<int>(input.size());
//    int first = 0;
//    int last = length-1;
//    while (last - first > 1) {
//        int mid = (first+last)/2;
//        if (input[mid] > input[first]) {
//            first = mid;
//        }else if(input[mid] < input[first]){
//            last = mid;
//        }else {
//            ++first;
//        }
//    }
//    return min(input[first], input[last]);
//}
//
//int main(){
//    vector<int> input = {1,1,1,0,1};
//    int result = minOfVector(input);
//    cout << result << endl;
//    
//}