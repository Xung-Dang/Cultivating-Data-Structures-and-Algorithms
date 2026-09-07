class Solution:
    def Merge_Array(self, nums1, m, nums2, n):
        i = m-1
        j = n-1
        k = m+n-1

        while i >= 0 and  j >= 0:
            if nums1[i]>=nums2[j]:
                nums1[k] = nums1[i]
                i-=1
            else:
                nums1[k] = nums2[j]
                j-=1
            k-=1

        while j>=0:
            nums1[k] = nums2[j]
            j-=1
            k-=1
        return nums1

def main():
    solution = Solution()
    nums1 = [1,2,3,0,0,0]
    nums2 = [7,8,9]

    result=solution.Merge_Array(nums1,3,nums2,len(nums2))
    print("result: \n", result)

if __name__ == "__main__":
    main()