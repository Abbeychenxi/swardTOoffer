////
////  28.cpp
////  SwardToOffer
////
////  Created by 陈希 on 15/4/5.
////  Copyright (c) 2015年 陈希. All rights reserved.
////
////字符串的排列
////输入一个字符串,打印该字符串中字符的所有排列
////全排列问题
//
//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
////int main() {
////    string s = "abc";
////    
////    cout << s << endl;
////    while (next_permutation(begin(s), end(s))) {
////        cout << s << endl;
////    }
////}
//
//void permutation(char* str, char* begin) {
//    if (*begin == '\0') {
//        printf("%s\n", str);
//    }else {
//        for (char* index = begin; *index != '\0'; ++index) {
//            char temp = *index;
//            *index = *begin;
//            *begin = temp;
//            
//            permutation(str, begin+1);
//            
//            temp = *index;
//            *index = *begin;
//            *begin = temp;
//        }
//    }
//}
//
//void permutation(char* str) {
//    if (str == NULL) {
//        return;
//    }
//    permutation(str, str);
//}
//
//int main() {
//    char s[4] = "abc";
//    permutation(s);
//}
