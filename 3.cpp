//在二维数组中查找
//每一行从左到右递增排序
//每一列从上到下递增排序
//1 2 8 9
//2 4 9 12
//4 7 10 13
//6 8 11 15

#include <iostream>
#include <vector>

using namespace std;

bool searchInArray(vector<vector<int> > input, int target){
    int i = input[0].size() - 1;
    int j = 0;
    while(i >= 0 && j <= input.size()-1){
        //cout << input[j][i] << endl;
        if(input[j][i] == target)
            return true;
        if(input[j][i] > target)
            --i;
        else {
            ++j;
        }
    }
    return false;
}

int main(int argc, char const* argv[])
{
    vector<vector<int> >input = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
    bool result = searchInArray(input, 12);
    cout << result << endl;
    result = searchInArray(input, 3);
    cout << result << endl;
    return 0;
}
