#include <iostream>
using namespace std;

int SumElements(int array2[][])
{
    int MaxWealth= 0;

    for (int i = 0; i < array2.size(); i++) {

        int Wealth = 0;

        for (int j = 0; j < array2[i].size(); i++) {
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
    int FindElement[][] = {[1,2,3],[1,2,4]};

    int Result = SumElements(FindElement);

    cout << "result: "<< Result;

    return 0;
}