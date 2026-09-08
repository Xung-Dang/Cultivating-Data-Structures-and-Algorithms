#include <iostream>
using namespace std;
#include <vector>

int SumElements(vector<vector<int>> array2)
{
    int MaxWealth= 0;

    for (int i = 0; i < array2.size(); i++) {

        int Wealth = 0;

        for (int j = 0; j < array2[i].size(); j++) {
            Wealth +=  array2[i][j];
        }

        if (Wealth >= MaxWealth) {
            MaxWealth = Wealth;
        }
    }

    return MaxWealth;
}

int main()
{
    vector<vector<int>> FindElement = {
        {1, 2, 3},
        {1, 2, 4},
        {10,20}
    };

    int Result = SumElements(FindElement);

    cout << "result: "<< Result;

    return 0;
}