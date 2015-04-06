////
////  31.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/6.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////连续子数组的最大和
////{1,-2,3,10,-4,7,2,-5}
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int dp(vector<int> input, int index) {
//    if (index == 0) {
//        return input[index];
//    }else {
//        return max(dp(input, index-1)+input[index], input[index]);
//    }
//}
//
//int main() {
//    vector<int> input = {1,-2,3,10,-4,7,2,-5};
//    int result = INT_MIN;
//    for (int i = 0; i < input.size(); ++i) {
//        result = dp(input, i) > result ? dp(input, i) : result;
//    }
//    cout << result << endl;
//    return 0;
//}