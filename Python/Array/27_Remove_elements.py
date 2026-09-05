class Solution:
    def remove_element_two_pointer(self, a, value):
        k = 0
        for i in range(len(a)):
            if (a[i]!=value):
                a[k]=a[i]
                k+=1
        return k

    def remove_element_new_list(self, a, value):
        result = []
        for i in a:
            if (i!=value):
                result.append(i)
        return result



def main():
    solution = Solution()
    array = [1,2,3,4,3]
    result=solution.remove_element_new_list(array,3)
    print("result: \n", result)


    k=solution.remove_element_two_pointer(array,3)
    print("k= ", k)
    print("array_k ", array[:k])


if __name__ == "__main__":
    main()