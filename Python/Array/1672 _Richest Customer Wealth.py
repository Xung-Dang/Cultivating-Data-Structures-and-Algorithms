class Solution:
    def SumElements(self, ElementArray):
        Max_Wealth = 0

        for i in range(len(ElementArray)):
            Wealth = 0

            for j in range(len(ElementArray[i])):
                Wealth += ElementArray[i][j]

            if Wealth >= Max_Wealth:
                Max_Wealth = Wealth


        return Max_Wealth

def main():
    solution = Solution()
    ElementArray = [[1,2,4],[1,2,10],[10,20]]

    result = solution.SumElements(ElementArray)

    print("result: \n", result)

if __name__ == "__main__":
    main()