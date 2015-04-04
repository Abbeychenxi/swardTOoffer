//替换空格
//把字符串中空格替换成“20%”

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void replaceSpace(char *str, int length){
    if(str == NULL || length <= 0){
        return;
    }
    int count = 0;
    int originLength = 0;
    int index = 0;
    while(str[index] != '\0'){
        ++originLength;
        if(str[index] == ' '){
            ++count;
        }
        ++index;
    }
    int newLength = originLength + 2*count;
    if(newLength > length)
        return;
    int indexOfOrigin = originLength;
    int indexOfNew = newLength;
    while(indexOfOrigin >= 0 && indexOfNew > indexOfOrigin){
        if(str[indexOfOrigin] == ' '){
            str[indexOfNew --] = '0';
            str[indexOfNew --] = '2';
            str[indexOfNew --] = '%';
        }
        else {
            str[indexOfNew --] = str[indexOfOrigin];
        }
        -- indexOfOrigin;
    }
}

int main(int argc, char const* argv[])
{
    char *str = "We are happy.";
    char* test = (char*)malloc(30);
    strcpy(test, str);
    cout << test << endl;
    replaceSpace(test, 30);
    cout << test << endl;
    return 0;
}
